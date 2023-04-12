#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>
#include <unordered_map>
#include "TypeCheck.h"
#include "Stella/Skeleton.H"
#include "Stella/Absyn.H"

using namespace std;

namespace Stella
{

    string toString(Type *type);

    string toString(TypeBool *type_bool)
    {
        return "Bool";
    }

    string toString(TypeNat *type_nat)
    {
        return "Nat";
    }

    string toString(ListType *list_type)
    {
        string result = "";
        bool is_first_param = true;
        for (ListType::iterator i = list_type->begin(); i != list_type->end(); ++i)
        {
            result += (is_first_param ? "" : ",") + toString(*i);
            is_first_param = false;
        }
        return result;
    }

    string toString(TypeFun *type_fun)
    {
        string result = "";
        result += "(";                           // start of parameter types
        result += toString(type_fun->listtype_); // parameters types
        result += ")";                           // end of parameter types
        result += "->(";                         // start of return type
        result += toString(type_fun->type_);     // return type
        result += ")";
        return result;
    }

    string toString(Type *type)
    {
        if (type == nullptr)
        {
            return "NULLPTRTYPE";
        }
        if (auto *type_bool = dynamic_cast<TypeBool *>(type))
        {
            return toString(type_bool);
        }
        if (auto type_nat = dynamic_cast<TypeNat *>(type))
        {
            return toString(type_nat);
        }
        if (auto type_fun = dynamic_cast<TypeFun *>(type))
        {
            return toString(type_fun);
        }
        throw invalid_argument("Type is not implemented");
    }

    TypeFun *extractType(DeclFun *decl_fun)
    {
        auto list_param_decl = decl_fun->listparamdecl_;
        auto return_type = decl_fun->returntype_;
        auto list_type = new ListType();
        for (ListParamDecl::iterator i = list_param_decl->begin(); i != list_param_decl->end(); i++)
        {
            list_type->push_back(dynamic_cast<AParamDecl *>(*i)->type_);
        }
        Type *type = nullptr;
        if (auto some_return_type = dynamic_cast<SomeReturnType *>(return_type))
        {
            type = some_return_type->type_;
        }
        return new TypeFun(list_type, type);
    }

    class TypeError: public exception
    {
        private:
            string msg;
        public:
            TypeError(string e_type, string a_type, int r, int c)
                :msg(
                    "TypeError (" + to_string(r) + ", " + to_string(c) + "): " + 
                    "Expected " + e_type + " type but got " + a_type + " type."
                ){}
            TypeError(string text, int r, int c)
                :msg(
                    "TypeError (" + to_string(r) + ", " + to_string(c) + "): " + text
                ){}
            const char* what() const noexcept override{return msg.c_str();}
    };

    class UndefinedError: public exception
    {
        private:
            string msg;
        public:
            UndefinedError(string var_name, int r, int c)
                :msg(
                    "UndefinedError (" + to_string(r) + ", " + to_string(c) + "): " + 
                    var_name + " is not defined in this scope."
                ){}
            const char* what() const noexcept override{return msg.c_str();}
    };

    class VisitTypeCheck : public Skeleton
    {
    public:
        string message_outputs = "";

    private:
        unordered_map<StellaIdent, Type *> context = {};
        Type *expected_type = nullptr;
        Type *actual_type = nullptr;
        int visitDepth = 0;

        string colorize(string text, int code)
        {
            return "\033[1;" + to_string(30 + code % 8) + "m" + text + "\033[1;0m";
        }

        string putTab(int cnt)
        {
            string res = "";
            for (int i = 1; i < cnt; i++)
                res += colorize("| ", i);
            return res;
        }
        string beautify(string text, int depth)
        {
            return putTab(depth) + colorize(text, depth);
        }

        void enterVisit() { this->visitDepth++; }
        void exitVisit() { this->visitDepth--; }

        void logMessage(string text)
        {
            // cout << beautify(text, this->visitDepth) << endl;
            message_outputs += beautify(text, this->visitDepth) + "\n";
        }

        unordered_map<StellaIdent, Type *> enter_scope(ListParamDecl *list_param_decl)
        {
            unordered_map<StellaIdent, Type *> old_context(context.begin(), context.end());
            for (auto param : (*list_param_decl)){
                if (auto a_param = dynamic_cast<AParamDecl*>(param))
                    context[a_param->stellaident_] = a_param->type_;
                else
                    throw invalid_argument("ParamDecl is not implemented");
            }
            return old_context;
        }

        void exit_scope(unordered_map<StellaIdent, Type *> old_context)
        {
            context = old_context;
        }

        bool typecheck(Type *type1, Type *type2)
        {
            auto type1_bool = dynamic_cast<TypeBool *>(type1);
            auto type2_bool = dynamic_cast<TypeBool *>(type2);
            if (type1_bool != nullptr && type2_bool != nullptr)
                return true;

            auto type1_nat = dynamic_cast<TypeNat *>(type1);
            auto type2_nat = dynamic_cast<TypeNat *>(type2);
            if (type1_nat != nullptr && type2_nat != nullptr)
                return true;

            auto type1_fun = dynamic_cast<TypeFun*>(type1);
            auto type2_fun = dynamic_cast<TypeFun*>(type2);
            if (type1_fun != nullptr && type2_fun != nullptr){
                auto list_type1 = type1_fun->listtype_;
                auto list_type2 = type2_fun->listtype_;
                if( list_type1->size() != list_type2->size() )
                    return false;
                for(int i = 0; i < list_type1->size(); i ++)
                    if( !typecheck((*list_type1)[i], (*list_type2)[i]))
                        return false;
                
                return typecheck(type1_fun->type_, type2_fun->type_);
            }
            return false;
        }

        void set_actual_type(Expr *expr, Type *type)
        {
            if(expected_type != nullptr && !typecheck(expected_type, type)){
                throw TypeError(toString(expected_type), toString(type), expr->line_number, expr->char_number);
            }
            actual_type = type;
        }

        Type *typecheck_subexpr(Expr *expr, Type *type)
        {
            Type *old_expected_type = expected_type;
            expected_type = type;
            expr->accept(this);
            expected_type = old_expected_type;
            return actual_type;
        }

        void visitSucc(Succ *succ)
        {
            enterVisit();
            logMessage("visitSucc; expected_type: " + toString(expected_type));
            typecheck_subexpr(succ->expr_, new TypeNat());
            set_actual_type(succ, new TypeNat());
            exitVisit();
        }

        void visitNatRec(NatRec *nat_rec)
        {
            enterVisit();
            logMessage("visitNatRec; expected_type: " + toString(expected_type));
            typecheck_subexpr(nat_rec->expr_1, new TypeNat());
            
            logMessage("+-------------------------");
            auto expr2_type = typecheck_subexpr(nat_rec->expr_2, nullptr);

            logMessage("+-------------------------");
            typecheck_subexpr(nat_rec->expr_3, 
                new TypeFun(
                    consListType(new TypeNat(), new ListType()), 
                    new TypeFun(
                        consListType(expr2_type, new ListType()),
                        expr2_type
                    )
                )
            );
            set_actual_type(nat_rec, expr2_type);
            exitVisit();
        }

        void visitConstInt(ConstInt *const_int)
        {
            enterVisit();
            logMessage("visitConstInt: " + to_string(const_int->integer_) + "; expected_type: " + toString(expected_type));
            set_actual_type(const_int, new TypeNat());
            exitVisit();
        }

        void visitConstTrue(ConstTrue *const_true)
        {
            enterVisit();
            logMessage("visitConstTrue; expected_type: " + toString(expected_type));
            set_actual_type(const_true, new TypeBool);
            exitVisit();
        }

        void visitConstFalse(ConstFalse *const_false)
        {
            enterVisit();
            logMessage("visitConstFalse; expected_type: " + toString(expected_type));
            set_actual_type(const_false, new TypeBool());
            exitVisit();
        }

        void visitVar(Var *var)
        {
            enterVisit();
            logMessage("visitVar: " + var->stellaident_);
            if(context.find(var->stellaident_) == context.end())
                throw UndefinedError(var->stellaident_, var->line_number, var->char_number);
            set_actual_type(var, context[var->stellaident_]);
            exitVisit();
        }

        void visitIf(If *if_)
        {
            enterVisit();
            logMessage("visitIf");
            typecheck_subexpr(if_->expr_1, new TypeBool());
            logMessage("+-------------------------");
            typecheck_subexpr(if_->expr_2, expected_type);
            logMessage("+-------------------------");
            typecheck_subexpr(if_->expr_3, expected_type);
            exitVisit();
        }

        void visitApplication(Application *application)
        {
            enterVisit();
            logMessage("visitApplication; expected_type: " + toString(expected_type));
            auto expr_type = typecheck_subexpr(application->expr_, nullptr);
            if(auto type_fun = dynamic_cast<TypeFun*>(expr_type)){
                auto list_expr = application->listexpr_;
                auto list_type = type_fun->listtype_;

                if(list_type->size() != list_expr->size()){
                    throw TypeError(
                        "Expected " + to_string(list_type->size()) + " arguments but " + to_string(list_expr->size()) + " were given", 
                        application->line_number, application->char_number
                    );
                }
                auto expr_it = list_expr->begin(); 
                auto type_it = list_type->begin();
                while(expr_it != list_expr->end()){
                    typecheck_subexpr(*expr_it, *type_it);
                    expr_it ++;
                    type_it ++;
                }
                set_actual_type(application, type_fun->type_);                
            }
            else{
                throw TypeError(
                    "Expected function type but got " + toString(expr_type) + " type", application->line_number, application->char_number
                );
            }
            exitVisit();
        }

        void visitAbstraction(Abstraction *abstraction)
        {
            enterVisit();
            logMessage("visitAbstraction; expected_type: " + toString(expected_type));
            auto old_context = enter_scope(abstraction->listparamdecl_);

            auto list_type = new ListType();
            auto list_param = abstraction->listparamdecl_;
            for(ListParamDecl::iterator it = list_param->begin(); it != list_param->end(); it ++ )
                list_type->push_back(dynamic_cast<AParamDecl*>(*it)->type_);
            auto expr_type = typecheck_subexpr(abstraction->expr_, nullptr);
            set_actual_type(abstraction, new TypeFun(list_type, expr_type));

            exit_scope(old_context);
            exitVisit();
        }

        void visitDeclFun(DeclFun *decl_fun)
        {
            enterVisit();
            logMessage("visitDeclFun: " + decl_fun->stellaident_);
            auto old_context = enter_scope(decl_fun->listparamdecl_);

            if(auto some_return_type = dynamic_cast<SomeReturnType*>(decl_fun->returntype_))
                typecheck_subexpr(decl_fun->expr_, some_return_type->type_);
            else
                typecheck_subexpr(decl_fun->expr_, nullptr);

            exit_scope(old_context);
            context[decl_fun->stellaident_] = extractType(decl_fun);
            exitVisit();
        }

        void visitAProgram(AProgram *a_program)
        {
            enterVisit();
            logMessage("visitAProgram");
            a_program->listdecl_->accept(this);
            exitVisit();
        }
    };

    void typecheckProgram(Program *program)
    {
        auto visitTypeCheck = new VisitTypeCheck();

        try{
            program->accept(visitTypeCheck);
            cout << visitTypeCheck->message_outputs << endl;

            cout << "\033[1;32mSuccess!!!\033[1;0m\n" << endl;
        }
        catch(TypeError& e){
            exit(1);
        }
        catch(UndefinedError& e){
            exit(1);
        }

    }

}