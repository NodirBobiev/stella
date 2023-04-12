#include <iostream>

#include "Eval.h"
#include "TypeCheck.h"
#include "Stella/Absyn.H"
#include "Stella/Printer.H"
#include "Stella/Absyn.H"
#include "Stella/Parser.H"
#include "Stella/ParserError.H"
#include "Stella/Printer.H"

void usage() {
  printf("usage: Call with one of the following argument combinations:\n");
  printf("\t(no arguments)\tTypecheck stdin.\n");
  printf("\tPROGRAM\t\tParse content of file as Stella program, then call main with input parsed from stdin.\n");
}

enum MODE { TYPECHECK, INTERPRET } ;

int main(int argc, char ** argv)
{
  FILE *input;
  int quiet = 0;
  char *filename = NULL;

  MODE mode = TYPECHECK;

  if (argc > 1) {
    if (strcmp(argv[1], "typecheck") == 0) {
      if (argc > 2) {
        filename = argv[2];
      } else {
        usage();
        exit(1);
      }
    } else if (strcmp(argv[1], "interpret") == 0) {
      mode = INTERPRET;
      if (argc > 2) {
        filename = argv[2];
      } else {
        usage();
        exit(1);
      }
    } else {
      mode = INTERPRET;
      filename = argv[1];
    }
  }

  if (filename) {
    input = fopen(filename, "r");
    if (!input) {
      printf("cannot read file: %s\n", filename);
      exit(1);
    }
  } else {
    input = stdin;
  }

  Stella::Program *prog = nullptr;
  try {
    prog = Stella::pProgram(input);
    std::cout << "parsing succeeded!\n" ;
    if (prog) { std::cout << "prog is not null\n" ;}
  }
  catch (Stella::parse_error &ex) {
    std::cerr << "Parse error on line " << ex.getLine() << "\n";
  }
  if (filename)
    fclose(input);

  if (prog) {
    Stella::typecheckProgram(prog);
  }

  if (mode == INTERPRET) {
    int intInput;
    std::cin >> intInput;

    Stella::Expr *inputExpr = new Stella::ConstInt(0);
    for (int i = 0; i < intInput; i++) {
      inputExpr = new Stella::Succ(inputExpr);
    }

//    Stella::AProgram *inputWrapper = nullptr;
//    Stella::Expr *inputExpr = nullptr;
//    try {
//      inputWrapper = dynamic_cast<Stella::AProgram *>(
//          Stella::pProgram(("language core; fn input(x : Nat) -> Nat { return " + rawInput + " ; }").c_str())
//      );
//
//      inputExpr = dynamic_cast<Stella::DeclFun *>(inputWrapper->listdecl_[0][0])->expr_;
//    }
//    catch (Stella::parse_error &ex) {
//      std::cerr << "Parse error on line " << ex.getLine() << "\n";
//    }

    if (inputExpr) {
      auto *result = Stella::evalMainWith(prog, inputExpr);
      auto printTree = Stella::PrintAbsyn();
      std::cout << printTree.print(result) << std::endl;
    }
  }

  return 0;
}
