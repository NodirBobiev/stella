#include <iostream>
#include "TypeCheck.h"
#include "VisitTypeCheck.h"
#include "Stella/Absyn.H"

namespace Stella
{

  void typecheckProgram(Program *program)
  {
    program->accept(new VisitTypeCheck());
  }

} // namespace Stella
