#pragma once
#include "Stella/Absyn.H"

namespace Stella {

Expr *eval(Expr *expr);
Expr *evalMainWith(Program *prog, Expr *expr);

} // namespace Stella
