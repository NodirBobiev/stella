cmake_minimum_required(VERSION 3.19.0)
project(stella-interpreter VERSION 0.1.0)

set (Stella_Syntax
  src/Stella/Absyn.H
  src/Stella/Absyn.C
  src/Stella/Parser.H
  src/Stella/Parser.C
  src/Stella/ParserError.H
  src/Stella/Printer.H
  src/Stella/Printer.C
  src/Stella/Buffer.H
  src/Stella/Buffer.C
  src/Stella/Bison.H
  src/Stella/Lexer.C
  src/Stella/Skeleton.H
  src/Stella/Skeleton.C
)

set (SRCS
  src/Interpret.cpp
  src/Eval.h
  src/Eval.cpp
  src/TypeCheck.h
  src/TypeCheck.cpp
#   src/VisitTypeCheck.cpp
#   src/VisitTypeCheck.h
)

add_executable(stella-interpreter ${Stella_Syntax} ${SRCS})
set_property(TARGET stella-interpreter PROPERTY CXX_STANDARD 17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include(CTest)

add_test(NAME applying-non-function-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/applying-non-function-1.stella)
add_test(NAME applying-non-function-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/applying-non-function-2.stella)
add_test(NAME applying-non-function-3.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/applying-non-function-3.stella)
add_test(NAME argument-type-mismatch-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/argument-type-mismatch-1.stella)
add_test(NAME argument-type-mismatch-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/argument-type-mismatch-2.stella)
add_test(NAME argument-type-mismatch-3.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/argument-type-mismatch-3.stella)
add_test(NAME bad-if-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-if-1.stella)
add_test(NAME bad-if-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-if-2.stella)
add_test(NAME bad-squares-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-squares-1.stella)
add_test(NAME bad-squares-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-squares-2.stella)
add_test(NAME bad-succ-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-succ-1.stella)
add_test(NAME bad-succ-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-succ-2.stella)
add_test(NAME bad-succ-3.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/bad-succ-3.stella)
add_test(NAME shadowed-variable-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/shadowed-variable-1.stella)
add_test(NAME undefined-variable-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/undefined-variable-1.stella)
add_test(NAME undefined-variable-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/undefined-variable-2.stella)
# add_test(NAME ill-typed-1.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/ill-typed-1.stella)
# add_test(NAME ill-typed-2.stella COMMAND stella-interpreter typecheck ../tests/ill-typed/ill-typed-2.stella)
set_tests_properties(
        applying-non-function-1.stella
        applying-non-function-2.stella
        applying-non-function-3.stella
        argument-type-mismatch-1.stella
        argument-type-mismatch-2.stella
        argument-type-mismatch-3.stella
        bad-if-1.stella
        bad-if-2.stella
        bad-squares-1.stella
        bad-squares-2.stella
        bad-succ-1.stella
        bad-succ-2.stella
        bad-succ-3.stella
        shadowed-variable-1.stella
        undefined-variable-1.stella
        undefined-variable-2.stella
        # ill-typed-1.stella
        # ill-typed-2.stella
        PROPERTIES WILL_FAIL TRUE)

add_test(NAME factorial.stella COMMAND stella-interpreter typecheck ../tests/well-typed/factorial.stella)
add_test(NAME higher-order-1.stella COMMAND stella-interpreter typecheck ../tests/well-typed/higher-order-1.stella)
add_test(NAME increment_twice.stella COMMAND stella-interpreter typecheck ../tests/well-typed/increment_twice.stella)
add_test(NAME logical-operators.stella COMMAND stella-interpreter typecheck ../tests/well-typed/logical-operators.stella)
add_test(NAME squares.stella COMMAND stella-interpreter typecheck ../tests/well-typed/squares.stella)
# add_test(NAME well-typed-1.stella COMMAND stella-interpreter typecheck ../tests/well-typed/well-typed-1.stella)
# add_test(NAME well-typed-2.stella COMMAND stella-interpreter typecheck ../tests/well-typed/well-typed-2.stella)


add_test(NAME 1-added-test-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/added-test-1.stella)
add_test(NAME 2-added-test-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/added-test-2.stella)
add_test(NAME 3-application-param-type.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/application-param-type.stella)
add_test(NAME 4-applying-non-function-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/applying-non-function-1.stella)
add_test(NAME 5-applying-non-function-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/applying-non-function-2.stella)
add_test(NAME 6-applying-non-function-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/applying-non-function-3.stella)
add_test(NAME 7-argument-type-mismatch-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/argument-type-mismatch-1.stella)
add_test(NAME 8-argument-type-mismatch-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/argument-type-mismatch-2.stella)
add_test(NAME 9-argument-type-mismatch-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/argument-type-mismatch-3.stella)
add_test(NAME 10-argument-type-mismatch-4.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/argument-type-mismatch-4.stella)
add_test(NAME 11-bad-abstraction.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-abstraction.stella)
add_test(NAME 12-bad-add-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-add-1.stella)
add_test(NAME 13-bad-cmp-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-1.stella)
add_test(NAME 14-bad-cmp-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-2.stella)
add_test(NAME 15-bad-cmp-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-3.stella)
add_test(NAME 16-bad-cmp-4.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-4.stella)
add_test(NAME 17-bad-cmp-5.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-5.stella)
add_test(NAME 18-bad-cmp-6.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-cmp-6.stella)
add_test(NAME 19-bad-factorial-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-factorial-1.stella)
add_test(NAME 20-bad-factorial-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-factorial-2.stella)
add_test(NAME 21-bad-factorial.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-factorial.stella)
add_test(NAME 22-bad-function-call.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-function-call.stella)
add_test(NAME 23-bad-higher-order-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-higher-order-1.stella)
add_test(NAME 24-bad-if-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-if-1.stella)
add_test(NAME 25-bad-if-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-if-2.stella)
add_test(NAME 26-bad-if-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-if-3.stella)
add_test(NAME 27-bad-if-4.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-if-4.stella)
add_test(NAME 28-bad-if-and-undefined-variable-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-if-and-undefined-variable-1.stella)
add_test(NAME 29-bad-iszero.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-iszero.stella)
add_test(NAME 30-bad-logic-and-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-logic-and-1.stella)
add_test(NAME 31-bad-logic-not-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-logic-not-1.stella)
add_test(NAME 32-bad-logic-or-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-logic-or-1.stella)
add_test(NAME 33-bad-multiply-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-multiply-1.stella)
add_test(NAME 34-bad-nat-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-nat-1.stella)
add_test(NAME 35-bad-nat-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-nat-2.stella)
add_test(NAME 36-bad-nat-rec-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-nat-rec-1.stella)
add_test(NAME 37-bad-nat-rec-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-nat-rec-2.stella)
add_test(NAME 38-bad-return-type.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-return-type.stella)
add_test(NAME 39-bad-squares-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-squares-1.stella)
add_test(NAME 40-bad-squares-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-squares-2.stella)
add_test(NAME 41-bad-succ-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-succ-1.stella)
add_test(NAME 42-bad-succ-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-succ-2.stella)
add_test(NAME 43-bad-succ-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/bad-succ-3.stella)
add_test(NAME 44-function-mismatch.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/function-mismatch.stella)
add_test(NAME 45-invalid-nat.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/invalid-nat.stella)
add_test(NAME 46-invalid-not_.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/invalid-not_.stella)
add_test(NAME 47-my-factorial.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/my-factorial.stella)
add_test(NAME 48-my-ill-test-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/my-ill-test-2.stella)
add_test(NAME 49-my-ill-typed-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/my-ill-typed-1.stella)
add_test(NAME 50-my-ill-typed-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/my-ill-typed-2.stella)
add_test(NAME 51-my-mismatch.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/my-mismatch.stella)
add_test(NAME 52-nat__rec-parameters.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/nat__rec-parameters.stella)
add_test(NAME 53-shadowed-variable-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/shadowed-variable-1.stella)
add_test(NAME 54-shadowed-variable-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/shadowed-variable-2.stella)
add_test(NAME 55-undefined-variable-1.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/undefined-variable-1.stella)
add_test(NAME 56-undefined-variable-2.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/undefined-variable-2.stella)
add_test(NAME 57-undefined-variable-3.stella COMMAND stella-interpreter typecheck ../extended_tests/ill-typed/undefined-variable-3.stella)
set_tests_properties(
        1-added-test-1.stella
        2-added-test-2.stella
        3-application-param-type.stella
        4-applying-non-function-1.stella
        5-applying-non-function-2.stella
        6-applying-non-function-3.stella
        7-argument-type-mismatch-1.stella
        8-argument-type-mismatch-2.stella
        9-argument-type-mismatch-3.stella
        10-argument-type-mismatch-4.stella
        11-bad-abstraction.stella
        12-bad-add-1.stella
        13-bad-cmp-1.stella
        14-bad-cmp-2.stella
        15-bad-cmp-3.stella
        16-bad-cmp-4.stella
        17-bad-cmp-5.stella
        18-bad-cmp-6.stella
        19-bad-factorial-1.stella
        20-bad-factorial-2.stella
        21-bad-factorial.stella
        22-bad-function-call.stella
        23-bad-higher-order-1.stella
        24-bad-if-1.stella
        25-bad-if-2.stella
        26-bad-if-3.stella
        27-bad-if-4.stella
        28-bad-if-and-undefined-variable-1.stella
        29-bad-iszero.stella
        30-bad-logic-and-1.stella
        31-bad-logic-not-1.stella
        32-bad-logic-or-1.stella
        33-bad-multiply-1.stella
        34-bad-nat-1.stella
        35-bad-nat-2.stella
        36-bad-nat-rec-1.stella
        37-bad-nat-rec-2.stella
        38-bad-return-type.stella
        39-bad-squares-1.stella
        40-bad-squares-2.stella
        41-bad-succ-1.stella
        42-bad-succ-2.stella
        43-bad-succ-3.stella
        44-function-mismatch.stella
        45-invalid-nat.stella
        46-invalid-not_.stella
        47-my-factorial.stella
        48-my-ill-test-2.stella
        49-my-ill-typed-1.stella
        50-my-ill-typed-2.stella
        51-my-mismatch.stella
        52-nat__rec-parameters.stella
        53-shadowed-variable-1.stella
        54-shadowed-variable-2.stella
        55-undefined-variable-1.stella
        56-undefined-variable-2.stella
        57-undefined-variable-3.stella
        PROPERTIES WILL_FAIL TRUE)

add_test(NAME 58-abstract-function.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/abstract-function.stella)
add_test(NAME 59-added-test-1.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/added-test-1.stella)
add_test(NAME 60-added-test-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/added-test-2.stella)
add_test(NAME 61-apply-increase.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/apply-increase.stella)
add_test(NAME 62-applying-actual-function-3.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/applying-actual-function-3.stella)
add_test(NAME 63-bool-to-nat.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/bool-to-nat.stella)
add_test(NAME 64-cubes.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/cubes.stella)
add_test(NAME 65-decrement_twice.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/decrement_twice.stella)
add_test(NAME 66-double-application.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/double-application.stella)
add_test(NAME 67-good-if-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/good-if-2.stella)
add_test(NAME 68-good-if.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/good-if.stella)
add_test(NAME 69-good-succ-1.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/good-succ-1.stella)
add_test(NAME 70-good-succ-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/good-succ-2.stella)
add_test(NAME 71-higher-order-1.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/higher-order-1.stella)
add_test(NAME 72-higher-order-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/higher-order-2.stella)
add_test(NAME 73-increment-triple.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/increment-triple.stella)
add_test(NAME 74-increment_twice.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/increment_twice.stella)
add_test(NAME 75-inner-if.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/inner-if.stella)
add_test(NAME 76-many-if.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/many-if.stella)
add_test(NAME 77-my-good-if.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-good-if.stella)
add_test(NAME 78-my-good-succ.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-good-succ.stella)
add_test(NAME 79-my-test-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-test-2.stella)
add_test(NAME 80-my-test.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-test.stella)
add_test(NAME 81-my-well-typed-1.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-well-typed-1.stella)
add_test(NAME 82-my-well-typed-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/my-well-typed-2.stella)
add_test(NAME 83-nat-to-bool.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/nat-to-bool.stella)
add_test(NAME 84-negate.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/negate.stella)
add_test(NAME 85-nested.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/nested.stella)
add_test(NAME 86-shadowed-variable-2.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/shadowed-variable-2.stella)
add_test(NAME 87-simple-if.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/simple-if.stella)
add_test(NAME 88-simple-succ.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/simple-succ.stella)
add_test(NAME 89-simple-types.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/simple-types.stella)
add_test(NAME 90-squares.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/squares.stella)
add_test(NAME 91-succ-with-func.stella COMMAND stella-interpreter typecheck ../extended_tests/well-typed/succ-with-func.stella)
