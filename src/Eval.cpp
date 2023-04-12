#include <iostream>
#include "Eval.h"
#include "Stella/Absyn.H"

namespace Stella {

Expr *eval(Expr *expr) {
  if (!expr) {
    return nullptr;
  }

  std::cout << "evaluator is not implemented!\n";

  return expr;
}

Expr *evalMainWith(Program *prog, Expr *expr) {
  if (!expr) {
    return nullptr;
  }

  std::cout << "evaluator is not implemented!\n";

  return expr;
}

} // namespace Stella
