#pragma once
#include "Stella/Absyn.H"

namespace Stella {

void typecheckProgram(Program *program);

void typecheck(Expr *expr, Type *type);

Type *infer(Expr *expr);

} // namespace Stella
