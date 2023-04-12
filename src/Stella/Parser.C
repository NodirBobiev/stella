/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Stellaparse
#define yylex           Stellalex
#define yyerror         Stellaerror
#define yydebug         Stelladebug
#define yynerrs         Stellanerrs

/* First part of user prologue.  */
#line 22 "Stella.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE Stella_scan_string(const char *str, yyscan_t scanner);
extern void Stella_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void Stellalex_destroy(yyscan_t scanner);
extern char* Stellaget_text(yyscan_t scanner);

extern yyscan_t Stella_initialize_lexer(FILE * inp);

/* End C preamble code */

#line 105 "Parser.C"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Bison.H"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANGEQ = 4,                    /* _BANGEQ  */
  YYSYMBOL__LPAREN = 5,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 6,                    /* _RPAREN  */
  YYSYMBOL__STAR = 7,                      /* _STAR  */
  YYSYMBOL__PLUS = 8,                      /* _PLUS  */
  YYSYMBOL__COMMA = 9,                     /* _COMMA  */
  YYSYMBOL__MINUS = 10,                    /* _MINUS  */
  YYSYMBOL__RARROW = 11,                   /* _RARROW  */
  YYSYMBOL__DOT = 12,                      /* _DOT  */
  YYSYMBOL__SLASH = 13,                    /* _SLASH  */
  YYSYMBOL__COLON = 14,                    /* _COLON  */
  YYSYMBOL__SEMI = 15,                     /* _SEMI  */
  YYSYMBOL__LT = 16,                       /* _LT  */
  YYSYMBOL__LDARROW = 17,                  /* _LDARROW  */
  YYSYMBOL__SYMB_11 = 18,                  /* _SYMB_11  */
  YYSYMBOL__EQ = 19,                       /* _EQ  */
  YYSYMBOL__DEQ = 20,                      /* _DEQ  */
  YYSYMBOL__RDARROW = 21,                  /* _RDARROW  */
  YYSYMBOL__GT = 22,                       /* _GT  */
  YYSYMBOL__GTEQ = 23,                     /* _GTEQ  */
  YYSYMBOL__KW_Bool = 24,                  /* _KW_Bool  */
  YYSYMBOL__SYMB_26 = 25,                  /* _SYMB_26  */
  YYSYMBOL__SYMB_27 = 26,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_28 = 27,                  /* _SYMB_28  */
  YYSYMBOL__KW_Nat = 28,                   /* _KW_Nat  */
  YYSYMBOL__SYMB_30 = 29,                  /* _SYMB_30  */
  YYSYMBOL__SYMB_29 = 30,                  /* _SYMB_29  */
  YYSYMBOL__SYMB_31 = 31,                  /* _SYMB_31  */
  YYSYMBOL__KW_Unit = 32,                  /* _KW_Unit  */
  YYSYMBOL__LBRACK = 33,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 34,                   /* _RBRACK  */
  YYSYMBOL__KW_and = 35,                   /* _KW_and  */
  YYSYMBOL__KW_as = 36,                    /* _KW_as  */
  YYSYMBOL__KW_cons = 37,                  /* _KW_cons  */
  YYSYMBOL__KW_core = 38,                  /* _KW_core  */
  YYSYMBOL__KW_else = 39,                  /* _KW_else  */
  YYSYMBOL__KW_extend = 40,                /* _KW_extend  */
  YYSYMBOL__KW_false = 41,                 /* _KW_false  */
  YYSYMBOL__KW_fix = 42,                   /* _KW_fix  */
  YYSYMBOL__KW_fn = 43,                    /* _KW_fn  */
  YYSYMBOL__KW_fold = 44,                  /* _KW_fold  */
  YYSYMBOL__KW_if = 45,                    /* _KW_if  */
  YYSYMBOL__KW_in = 46,                    /* _KW_in  */
  YYSYMBOL__KW_inl = 47,                   /* _KW_inl  */
  YYSYMBOL__KW_inline = 48,                /* _KW_inline  */
  YYSYMBOL__KW_inr = 49,                   /* _KW_inr  */
  YYSYMBOL__KW_language = 50,              /* _KW_language  */
  YYSYMBOL__KW_let = 51,                   /* _KW_let  */
  YYSYMBOL__KW_letrec = 52,                /* _KW_letrec  */
  YYSYMBOL__KW_match = 53,                 /* _KW_match  */
  YYSYMBOL__KW_not = 54,                   /* _KW_not  */
  YYSYMBOL__KW_or = 55,                    /* _KW_or  */
  YYSYMBOL__KW_return = 56,                /* _KW_return  */
  YYSYMBOL__KW_succ = 57,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 58,                  /* _KW_then  */
  YYSYMBOL__KW_throws = 59,                /* _KW_throws  */
  YYSYMBOL__KW_true = 60,                  /* _KW_true  */
  YYSYMBOL__KW_type = 61,                  /* _KW_type  */
  YYSYMBOL__KW_unfold = 62,                /* _KW_unfold  */
  YYSYMBOL__KW_unit = 63,                  /* _KW_unit  */
  YYSYMBOL__KW_with = 64,                  /* _KW_with  */
  YYSYMBOL__LBRACE = 65,                   /* _LBRACE  */
  YYSYMBOL__BAR = 66,                      /* _BAR  */
  YYSYMBOL__SYMB_12 = 67,                  /* _SYMB_12  */
  YYSYMBOL__RBRACE = 68,                   /* _RBRACE  */
  YYSYMBOL__KW_65 = 69,                    /* _KW_65  */
  YYSYMBOL_T_ExtensionName = 70,           /* T_ExtensionName  */
  YYSYMBOL_T_StellaIdent = 71,             /* T_StellaIdent  */
  YYSYMBOL__INTEGER_ = 72,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_Program = 74,                   /* Program  */
  YYSYMBOL_LanguageDecl = 75,              /* LanguageDecl  */
  YYSYMBOL_Extension = 76,                 /* Extension  */
  YYSYMBOL_ListExtensionName = 77,         /* ListExtensionName  */
  YYSYMBOL_ListExtension = 78,             /* ListExtension  */
  YYSYMBOL_Decl = 79,                      /* Decl  */
  YYSYMBOL_ListDecl = 80,                  /* ListDecl  */
  YYSYMBOL_Annotation = 81,                /* Annotation  */
  YYSYMBOL_ListAnnotation = 82,            /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 83,                 /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 84,             /* ListParamDecl  */
  YYSYMBOL_ReturnType = 85,                /* ReturnType  */
  YYSYMBOL_ThrowType = 86,                 /* ThrowType  */
  YYSYMBOL_Type9 = 87,                     /* Type9  */
  YYSYMBOL_ListType9 = 88,                 /* ListType9  */
  YYSYMBOL_MatchCase = 89,                 /* MatchCase  */
  YYSYMBOL_ListMatchCase = 90,             /* ListMatchCase  */
  YYSYMBOL_OptionalTyping = 91,            /* OptionalTyping  */
  YYSYMBOL_PatternData = 92,               /* PatternData  */
  YYSYMBOL_ExprData = 93,                  /* ExprData  */
  YYSYMBOL_Pattern = 94,                   /* Pattern  */
  YYSYMBOL_ListPattern = 95,               /* ListPattern  */
  YYSYMBOL_LabelledPattern = 96,           /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 97,       /* ListLabelledPattern  */
  YYSYMBOL_Binding = 98,                   /* Binding  */
  YYSYMBOL_ListBinding = 99,               /* ListBinding  */
  YYSYMBOL_Expr = 100,                     /* Expr  */
  YYSYMBOL_ListExpr = 101,                 /* ListExpr  */
  YYSYMBOL_Expr1 = 102,                    /* Expr1  */
  YYSYMBOL_PatternBinding = 103,           /* PatternBinding  */
  YYSYMBOL_ListPatternBinding = 104,       /* ListPatternBinding  */
  YYSYMBOL_Expr2 = 105,                    /* Expr2  */
  YYSYMBOL_Expr3 = 106,                    /* Expr3  */
  YYSYMBOL_Expr4 = 107,                    /* Expr4  */
  YYSYMBOL_Expr6 = 108,                    /* Expr6  */
  YYSYMBOL_Expr7 = 109,                    /* Expr7  */
  YYSYMBOL_Type = 110,                     /* Type  */
  YYSYMBOL_Type1 = 111,                    /* Type1  */
  YYSYMBOL_Type2 = 112,                    /* Type2  */
  YYSYMBOL_Type3 = 113,                    /* Type3  */
  YYSYMBOL_ListType = 114,                 /* ListType  */
  YYSYMBOL_Expr5 = 115,                    /* Expr5  */
  YYSYMBOL_VariantFieldType = 116,         /* VariantFieldType  */
  YYSYMBOL_ListVariantFieldType = 117,     /* ListVariantFieldType  */
  YYSYMBOL_RecordFieldType = 118,          /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 119       /* ListRecordFieldType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 97 "Stella.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, Stellaget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 270 "Parser.C"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   236,   236,   242,   244,   246,   247,   248,   250,   251,
     253,   254,   256,   257,   264,   266,   267,   269,   271,   272,
     273,   275,   276,   278,   279,   281,   283,   284,   286,   288,
     289,   290,   292,   293,   295,   296,   298,   299,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   316,   317,   318,   320,   322,   323,   325,   327,
     328,   330,   331,   332,   334,   335,   336,   338,   339,   340,
     341,   343,   345,   346,   348,   349,   350,   351,   352,   353,
     354,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     369,   370,   371,   372,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   395,   396,   397,   398,   399,   400,
     402,   403,   404,   406,   407,   409,   410,   411,   412,   413,
     415,   416,   417,   418,   419,   421,   422,   423,   425,   427,
     429,   430,   431,   433,   435,   436
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANGEQ",
  "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_COMMA", "_MINUS", "_RARROW",
  "_DOT", "_SLASH", "_COLON", "_SEMI", "_LT", "_LDARROW", "_SYMB_11",
  "_EQ", "_DEQ", "_RDARROW", "_GT", "_GTEQ", "_KW_Bool", "_SYMB_26",
  "_SYMB_27", "_SYMB_28", "_KW_Nat", "_SYMB_30", "_SYMB_29", "_SYMB_31",
  "_KW_Unit", "_LBRACK", "_RBRACK", "_KW_and", "_KW_as", "_KW_cons",
  "_KW_core", "_KW_else", "_KW_extend", "_KW_false", "_KW_fix", "_KW_fn",
  "_KW_fold", "_KW_if", "_KW_in", "_KW_inl", "_KW_inline", "_KW_inr",
  "_KW_language", "_KW_let", "_KW_letrec", "_KW_match", "_KW_not",
  "_KW_or", "_KW_return", "_KW_succ", "_KW_then", "_KW_throws", "_KW_true",
  "_KW_type", "_KW_unfold", "_KW_unit", "_KW_with", "_LBRACE", "_BAR",
  "_SYMB_12", "_RBRACE", "_KW_65", "T_ExtensionName", "T_StellaIdent",
  "_INTEGER_", "$accept", "Program", "LanguageDecl", "Extension",
  "ListExtensionName", "ListExtension", "Decl", "ListDecl", "Annotation",
  "ListAnnotation", "ParamDecl", "ListParamDecl", "ReturnType",
  "ThrowType", "Type9", "ListType9", "MatchCase", "ListMatchCase",
  "OptionalTyping", "PatternData", "ExprData", "Pattern", "ListPattern",
  "LabelledPattern", "ListLabelledPattern", "Binding", "ListBinding",
  "Expr", "ListExpr", "Expr1", "PatternBinding", "ListPatternBinding",
  "Expr2", "Expr3", "Expr4", "Expr6", "Expr7", "Type", "Type1", "Type2",
  "Type3", "ListType", "Expr5", "VariantFieldType", "ListVariantFieldType",
  "RecordFieldType", "ListRecordFieldType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -15,    27,  -255,    21,  -255,     9,  -255,   -14,    44,
      12,    -8,  -255,    13,  -255,   -27,    54,  -255,    61,    16,
    -255,  -255,    -8,    33,    77,  -255,    33,    17,  -255,  -255,
    -255,    33,    84,   372,    20,  -255,  -255,  -255,    85,  -255,
      24,    93,    92,    98,    41,    75,    33,    96,   108,    51,
     109,    57,   110,   348,   112,   120,   124,  -255,    33,  -255,
      17,  -255,  -255,   128,    33,    33,  -255,    64,  -255,    33,
    -255,    33,    24,   126,  -255,  -255,   127,  -255,  -255,    96,
    -255,  -255,  -255,  -255,    33,    82,    33,  -255,    33,    83,
    -255,   133,  -255,  -255,  -255,    33,   -36,  -255,   139,   139,
      76,   144,   145,   146,   147,   148,   150,   139,   151,  -255,
     153,   158,   134,   139,   166,   168,   326,   326,   248,   169,
     170,  -255,   152,  -255,   198,  -255,  -255,   111,   174,  -255,
     123,    11,    14,  -255,  -255,   188,   176,   139,   139,   139,
     139,   139,   139,   189,   163,   139,   139,    24,    33,   142,
     139,   139,   326,   135,   326,  -255,   200,   202,   203,  -255,
    -255,   346,  -255,  -255,   190,   205,   172,   173,   155,   139,
     139,    33,   193,   212,   154,   162,  -255,   139,   248,   298,
     298,   248,   248,   248,   248,   248,   348,   298,   298,   298,
     298,   139,   -38,  -255,   139,   159,   226,   227,   228,   230,
     231,   229,   139,  -255,   235,   240,   250,   214,   139,   251,
     253,    22,   243,   245,   233,   326,   326,   326,   246,   196,
     259,   204,   139,   326,   139,   139,   326,   265,   270,   249,
     139,   209,  -255,  -255,  -255,    50,    11,    11,    50,    50,
      50,    50,    50,  -255,    11,  -255,  -255,  -255,   276,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,   139,  -255,
     139,  -255,   219,    40,   247,  -255,  -255,  -255,   326,   326,
     220,   326,  -255,   282,   287,   288,   326,  -255,   225,  -255,
    -255,  -255,  -255,  -255,   232,   236,   278,  -255,  -255,    40,
    -255,   193,  -255,  -255,   291,   300,   256,  -255,   139,   301,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,   246,  -255,   326,
    -255,   139,  -255,   139,  -255,   139,  -255,  -255,  -255,  -255,
     303,   254,  -255,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,     0,     1,    12,     3,     0,     0,
      15,     5,     9,     0,    13,     0,     6,     4,     0,     0,
      14,    16,     5,     0,     0,     7,     0,   140,   130,   131,
     132,     0,     0,   135,     0,   133,    11,   122,   124,   129,
      18,     0,    32,   141,     0,     0,   135,   133,   136,     0,
     144,     0,     0,     0,     0,    19,     0,   134,     0,   139,
     140,   127,   128,     0,     0,   135,   125,     0,   126,     0,
     123,     0,    18,    21,    33,   142,     0,   143,   137,     0,
     145,   121,    17,    20,     0,    23,     0,    22,     0,     0,
     120,    26,    24,    25,    12,     0,    15,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,   116,    64,   118,   117,     0,    63,    70,
      80,    89,   138,   113,    93,     0,    36,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,    52,    45,     0,     0,     0,    46,
      47,    52,    50,    48,     0,    72,     0,     0,     0,     0,
       0,     0,   118,    59,     0,     0,    10,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    53,     0,     0,     0,     0,    50,     0,
      56,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,    98,    97,    61,    79,    86,    87,    74,    75,
      78,    76,    77,    81,    88,    90,    91,    92,     0,    95,
      96,    37,    83,   100,   101,   102,   108,   107,     0,    66,
       0,   109,     0,     0,     0,   103,   104,    51,     0,     0,
       0,    52,    43,     0,     0,     0,     0,    41,     0,    42,
      71,    73,    68,    69,    30,     0,     0,   106,   105,     0,
      58,     0,    60,    94,     0,     0,     0,   111,     0,     0,
      35,    38,    54,    39,    40,    49,    55,     0,    57,    29,
      84,     0,   112,     0,    99,     0,    67,    44,    31,    28,
       0,     0,   110,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,  -255,   292,  -255,  -255,   221,  -255,  -255,
    -255,   -64,  -255,  -255,  -255,   222,  -255,     7,  -255,  -255,
    -255,  -148,  -156,  -255,    43,  -255,    87,   -98,  -117,  -111,
    -255,  -107,   208,   242,  -165,  -255,  -254,     6,  -255,   -50,
    -255,   -35,  -134,  -255,   272,  -255,   263
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     9,    17,     6,    14,    10,    21,    15,
      55,    56,    85,    89,    91,    92,   284,   285,    59,   270,
     195,   164,   214,   220,   221,   173,   174,   143,   144,   128,
     165,   166,   129,   130,   131,   132,   133,    48,    37,    38,
      39,    49,   134,    43,    44,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   135,   149,    70,   211,   219,   213,   175,    83,   297,
     167,    63,    -2,   213,   236,   237,    19,     1,   188,   191,
      98,    20,   244,     4,   189,    13,   192,     5,   267,    36,
      78,   268,    41,   249,   250,   312,     7,    45,    26,   196,
     197,   198,   199,   200,   201,    99,   190,   204,   205,     8,
      11,    27,   209,   210,   245,   246,   247,    28,   179,    12,
     180,    29,    16,    22,    74,    30,    31,   273,   274,   275,
      77,   227,   228,    13,   248,    81,    32,    82,   286,   234,
      23,   109,    40,   206,    18,   259,   186,    24,    42,    46,
      87,    52,    90,    53,    93,    54,   251,   264,    33,    57,
     121,    93,    34,   123,    35,   187,    58,    60,    61,    62,
      64,   125,   126,   282,   283,   302,   281,    65,    67,    66,
     299,   300,    69,   213,   280,    68,    71,   178,   306,    72,
      73,   179,   290,   180,    76,    79,   243,    84,    86,   181,
     182,    88,    95,   183,    99,   184,   185,   136,    94,   137,
     138,   139,   140,   141,   207,   142,   145,   100,   146,   186,
     294,   286,   295,   147,   101,   102,   103,   148,   104,   105,
     106,   150,   107,   151,   169,   170,   108,   229,   187,   176,
     109,   110,   111,   112,   113,   171,   114,   316,   115,   177,
     116,   117,   118,   119,   193,   194,   120,   203,   202,   121,
     208,   122,   123,    99,   124,   215,   212,   216,   217,   222,
     125,   126,   230,   319,   223,   320,   100,   321,   224,   225,
     226,   231,   232,   101,   102,   103,   252,   104,   105,   106,
     233,   107,   253,   254,   255,   108,   256,   257,   258,   109,
     110,   111,   112,   113,   260,   114,   261,   115,   263,   116,
     117,   118,   119,    99,   271,   120,   262,   265,   121,   266,
     122,   123,   269,   124,   277,   276,   100,   272,   278,   172,
     126,   287,   279,   101,   102,   103,   288,   104,   105,   106,
     291,   107,   293,   289,   296,   108,   298,   301,   303,   109,
     110,   111,   112,   304,   305,   114,   307,   115,   309,   311,
     313,   118,   119,    99,   310,   120,   314,   317,   121,   322,
     122,   123,   315,   124,    25,    96,   318,    97,   292,   125,
     126,   308,   323,   101,   102,   103,   168,   104,   105,   106,
      80,   152,    75,     0,     0,   108,     0,     0,     0,   109,
     110,     0,   112,     0,   153,   114,     0,   115,     0,     0,
       0,   152,   119,    26,     0,   120,     0,     0,   121,   154,
     122,   123,     0,   124,   153,     0,    27,   155,     0,   125,
     126,     0,    28,   156,     0,   157,    29,    26,     0,   154,
      30,    31,     0,   158,     0,     0,   159,   155,     0,   160,
      27,   161,     0,   156,     0,   157,    28,   162,   163,     0,
      29,     0,     0,   158,    30,    31,   159,     0,     0,   160,
       0,   161,     0,    33,     0,    32,     0,   218,   163,    35,
     235,     0,     0,   238,   239,   240,   241,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    34,     0,    47
};

static const yytype_int16 yycheck[] =
{
      98,    99,   113,    53,   152,   161,   154,   124,    72,   263,
     117,    46,     0,   161,   179,   180,    43,    50,     7,     5,
      56,    48,   187,    38,    13,    61,    12,     0,     6,    23,
      65,     9,    26,    71,    72,   289,    15,    31,     5,   137,
     138,   139,   140,   141,   142,     5,    35,   145,   146,    40,
      64,    18,   150,   151,   188,   189,   190,    24,     8,    15,
      10,    28,    70,     9,    58,    32,    33,   215,   216,   217,
      64,   169,   170,    61,   191,    69,    43,    71,   226,   177,
      19,    41,     5,   147,    71,   202,    36,    71,    71,     5,
      84,    71,    86,     8,    88,    71,   194,   208,    65,     6,
      60,    95,    69,    63,    71,    55,    14,     9,    67,    34,
      14,    71,    72,   224,   225,   271,   223,     9,     9,    68,
     268,   269,    12,   271,   222,    68,    14,     4,   276,     9,
       6,     8,   230,    10,     6,    71,   186,    11,    11,    16,
      17,    59,     9,    20,     5,    22,    23,    71,    65,     5,
       5,     5,     5,     5,   148,     5,     5,    18,     5,    36,
     258,   309,   260,     5,    25,    26,    27,    33,    29,    30,
      31,     5,    33,     5,     5,     5,    37,   171,    55,    68,
      41,    42,    43,    44,    45,    33,    47,   298,    49,    15,
      51,    52,    53,    54,     6,    19,    57,    34,     9,    60,
      58,    62,    63,     5,    65,     5,    71,     5,     5,    19,
      71,    72,    19,   311,     9,   313,    18,   315,    46,    46,
      65,     9,    68,    25,    26,    27,    67,    29,    30,    31,
      68,    33,     6,     6,     6,    37,     6,     6,     9,    41,
      42,    43,    44,    45,     9,    47,     6,    49,    34,    51,
      52,    53,    54,     5,     9,    57,     6,     6,    60,     6,
      62,    63,    19,    65,    68,    19,    18,    34,     9,    71,
      72,     6,    68,    25,    26,    27,     6,    29,    30,    31,
      71,    33,     6,    34,    65,    37,    39,    67,     6,    41,
      42,    43,    44,     6,     6,    47,    71,    49,    66,    21,
       9,    53,    54,     5,    68,    57,     6,     6,    60,     6,
      62,    63,    56,    65,    22,    94,   309,    95,   231,    71,
      72,   278,    68,    25,    26,    27,   118,    29,    30,    31,
      67,     5,    60,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    -1,    18,    47,    -1,    49,    -1,    -1,
      -1,     5,    54,     5,    -1,    57,    -1,    -1,    60,    33,
      62,    63,    -1,    65,    18,    -1,    18,    41,    -1,    71,
      72,    -1,    24,    47,    -1,    49,    28,     5,    -1,    33,
      32,    33,    -1,    57,    -1,    -1,    60,    41,    -1,    63,
      18,    65,    -1,    47,    -1,    49,    24,    71,    72,    -1,
      28,    -1,    -1,    57,    32,    33,    60,    -1,    -1,    63,
      -1,    65,    -1,    65,    -1,    43,    -1,    71,    72,    71,
     178,    -1,    -1,   181,   182,   183,   184,   185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    74,    75,    38,     0,    78,    15,    40,    76,
      80,    64,    15,    61,    79,    82,    70,    77,    71,    43,
      48,    81,     9,    19,    71,    77,     5,    18,    24,    28,
      32,    33,    43,    65,    69,    71,   110,   111,   112,   113,
       5,   110,    71,   116,   117,   110,     5,    71,   110,   114,
     118,   119,    71,     8,    71,    83,    84,     6,    14,    91,
       9,    67,    34,   114,    14,     9,    68,     9,    68,    12,
     112,    14,     9,     6,   110,   117,     6,   110,   114,    71,
     119,   110,   110,    84,    11,    85,    11,   110,    59,    86,
     110,    87,    88,   110,    65,     9,    80,    88,    56,     5,
      18,    25,    26,    27,    29,    30,    31,    33,    37,    41,
      42,    43,    44,    45,    47,    49,    51,    52,    53,    54,
      57,    60,    62,    63,    65,    71,    72,   100,   102,   105,
     106,   107,   108,   109,   115,   100,    71,     5,     5,     5,
       5,     5,     5,   100,   101,     5,     5,     5,    33,   102,
       5,     5,     5,    18,    33,    41,    47,    49,    57,    60,
      63,    65,    71,    72,    94,   103,   104,   104,   105,     5,
       5,    33,    71,    98,    99,   101,    68,    15,     4,     8,
      10,    16,    17,    20,    22,    23,    36,    55,     7,    13,
      35,     5,    12,     6,    19,    93,   100,   100,   100,   100,
     100,   100,     9,    34,   100,   100,    84,   110,    58,   100,
     100,    94,    71,    94,    95,     5,     5,     5,    71,    95,
      96,    97,    19,     9,    46,    46,    65,   100,   100,   110,
      19,     9,    68,    68,   100,   106,   107,   107,   106,   106,
     106,   106,   106,   112,   107,   115,   115,   115,   101,    71,
      72,   100,    67,     6,     6,     6,     6,     6,     9,   101,
       9,     6,     6,    34,   102,     6,     6,     6,     9,    19,
      92,     9,    34,    94,    94,    94,    19,    68,     9,    68,
     100,   104,   102,   102,    89,    90,    94,     6,     6,    34,
     100,    71,    99,     6,   100,   100,    65,   109,    39,    94,
      94,    67,    95,     6,     6,     6,    94,    71,    97,    66,
      68,    21,   109,     9,     6,    56,   102,     6,    90,   100,
     100,   100,     6,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    75,    76,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    82,    82,    83,    84,    84,
      84,    85,    85,    86,    86,    87,    88,    88,    89,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   109,   109,
     110,   110,   110,   111,   111,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   116,
     117,   117,   117,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     0,     1,     3,     0,     3,
      13,     4,     0,     2,     1,     0,     2,     3,     0,     1,
       3,     0,     2,     0,     2,     1,     1,     3,     3,     0,
       1,     3,     0,     2,     0,     2,     0,     2,     4,     4,
       4,     3,     3,     3,     5,     1,     1,     1,     1,     4,
       1,     3,     0,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     1,     0,     1,     3,     6,     4,     4,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     8,     4,     5,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     4,     3,     3,     3,     3,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       8,     5,     5,     1,     1,     1,     1,     1,     1,     3,
       6,     4,     1,     3,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     0,     1,     3,     1,     2,
       0,     1,     3,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: LanguageDecl ListExtension ListDecl  */
#line 236 "Stella.y"
                                              { (yyval.program_) = new Stella::AProgram((yyvsp[-2].languagedecl_), (yyvsp[-1].listextension_), (yyvsp[0].listdecl_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1600 "Parser.C"
    break;

  case 3: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 242 "Stella.y"
                                           { (yyval.languagedecl_) = new Stella::LanguageCore(); (yyval.languagedecl_)->line_number = (yyloc).first_line; (yyval.languagedecl_)->char_number = (yyloc).first_column; result->languagedecl_ = (yyval.languagedecl_); }
#line 1606 "Parser.C"
    break;

  case 4: /* Extension: _KW_extend _KW_with ListExtensionName  */
#line 244 "Stella.y"
                                                  { std::reverse((yyvsp[0].listextensionname_)->begin(),(yyvsp[0].listextensionname_)->end()) ;(yyval.extension_) = new Stella::AnExtension((yyvsp[0].listextensionname_)); (yyval.extension_)->line_number = (yyloc).first_line; (yyval.extension_)->char_number = (yyloc).first_column; result->extension_ = (yyval.extension_); }
#line 1612 "Parser.C"
    break;

  case 5: /* ListExtensionName: %empty  */
#line 246 "Stella.y"
                                { (yyval.listextensionname_) = new Stella::ListExtensionName(); result->listextensionname_ = (yyval.listextensionname_); }
#line 1618 "Parser.C"
    break;

  case 6: /* ListExtensionName: T_ExtensionName  */
#line 247 "Stella.y"
                    { (yyval.listextensionname_) = new Stella::ListExtensionName(); (yyval.listextensionname_)->push_back((yyvsp[0]._string)); result->listextensionname_ = (yyval.listextensionname_); }
#line 1624 "Parser.C"
    break;

  case 7: /* ListExtensionName: T_ExtensionName _COMMA ListExtensionName  */
#line 248 "Stella.y"
                                             { (yyvsp[0].listextensionname_)->push_back((yyvsp[-2]._string)); (yyval.listextensionname_) = (yyvsp[0].listextensionname_); result->listextensionname_ = (yyval.listextensionname_); }
#line 1630 "Parser.C"
    break;

  case 8: /* ListExtension: %empty  */
#line 250 "Stella.y"
                            { (yyval.listextension_) = new Stella::ListExtension(); result->listextension_ = (yyval.listextension_); }
#line 1636 "Parser.C"
    break;

  case 9: /* ListExtension: ListExtension Extension _SEMI  */
#line 251 "Stella.y"
                                  { (yyvsp[-2].listextension_)->push_back((yyvsp[-1].extension_)); (yyval.listextension_) = (yyvsp[-2].listextension_); result->listextension_ = (yyval.listextension_); }
#line 1642 "Parser.C"
    break;

  case 10: /* Decl: ListAnnotation _KW_fn T_StellaIdent _LPAREN ListParamDecl _RPAREN ReturnType ThrowType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 253 "Stella.y"
                                                                                                                                       { std::reverse((yyvsp[-8].listparamdecl_)->begin(),(yyvsp[-8].listparamdecl_)->end()) ;(yyval.decl_) = new Stella::DeclFun((yyvsp[-12].listannotation_), (yyvsp[-10]._string), (yyvsp[-8].listparamdecl_), (yyvsp[-6].returntype_), (yyvsp[-5].throwtype_), (yyvsp[-3].listdecl_), (yyvsp[-1].expr_)); (yyval.decl_)->line_number = (yyloc).first_line; (yyval.decl_)->char_number = (yyloc).first_column; result->decl_ = (yyval.decl_); }
#line 1648 "Parser.C"
    break;

  case 11: /* Decl: _KW_type T_StellaIdent _EQ Type  */
#line 254 "Stella.y"
                                    { (yyval.decl_) = new Stella::DeclTypeAlias((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.decl_)->line_number = (yyloc).first_line; (yyval.decl_)->char_number = (yyloc).first_column; result->decl_ = (yyval.decl_); }
#line 1654 "Parser.C"
    break;

  case 12: /* ListDecl: %empty  */
#line 256 "Stella.y"
                       { (yyval.listdecl_) = new Stella::ListDecl(); result->listdecl_ = (yyval.listdecl_); }
#line 1660 "Parser.C"
    break;

  case 13: /* ListDecl: ListDecl Decl  */
#line 257 "Stella.y"
                  { (yyvsp[-1].listdecl_)->push_back((yyvsp[0].decl_)); (yyval.listdecl_) = (yyvsp[-1].listdecl_); result->listdecl_ = (yyval.listdecl_); }
#line 1666 "Parser.C"
    break;

  case 14: /* Annotation: _KW_inline  */
#line 264 "Stella.y"
                        { (yyval.annotation_) = new Stella::InlineAnnotation(); (yyval.annotation_)->line_number = (yyloc).first_line; (yyval.annotation_)->char_number = (yyloc).first_column; result->annotation_ = (yyval.annotation_); }
#line 1672 "Parser.C"
    break;

  case 15: /* ListAnnotation: %empty  */
#line 266 "Stella.y"
                             { (yyval.listannotation_) = new Stella::ListAnnotation(); result->listannotation_ = (yyval.listannotation_); }
#line 1678 "Parser.C"
    break;

  case 16: /* ListAnnotation: ListAnnotation Annotation  */
#line 267 "Stella.y"
                              { (yyvsp[-1].listannotation_)->push_back((yyvsp[0].annotation_)); (yyval.listannotation_) = (yyvsp[-1].listannotation_); result->listannotation_ = (yyval.listannotation_); }
#line 1684 "Parser.C"
    break;

  case 17: /* ParamDecl: T_StellaIdent _COLON Type  */
#line 269 "Stella.y"
                                      { (yyval.paramdecl_) = new Stella::AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.paramdecl_)->line_number = (yyloc).first_line; (yyval.paramdecl_)->char_number = (yyloc).first_column; result->paramdecl_ = (yyval.paramdecl_); }
#line 1690 "Parser.C"
    break;

  case 18: /* ListParamDecl: %empty  */
#line 271 "Stella.y"
                            { (yyval.listparamdecl_) = new Stella::ListParamDecl(); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1696 "Parser.C"
    break;

  case 19: /* ListParamDecl: ParamDecl  */
#line 272 "Stella.y"
              { (yyval.listparamdecl_) = new Stella::ListParamDecl(); (yyval.listparamdecl_)->push_back((yyvsp[0].paramdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1702 "Parser.C"
    break;

  case 20: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 273 "Stella.y"
                                   { (yyvsp[0].listparamdecl_)->push_back((yyvsp[-2].paramdecl_)); (yyval.listparamdecl_) = (yyvsp[0].listparamdecl_); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1708 "Parser.C"
    break;

  case 21: /* ReturnType: %empty  */
#line 275 "Stella.y"
                         { (yyval.returntype_) = new Stella::NoReturnType(); (yyval.returntype_)->line_number = (yyloc).first_line; (yyval.returntype_)->char_number = (yyloc).first_column; result->returntype_ = (yyval.returntype_); }
#line 1714 "Parser.C"
    break;

  case 22: /* ReturnType: _RARROW Type  */
#line 276 "Stella.y"
                 { (yyval.returntype_) = new Stella::SomeReturnType((yyvsp[0].type_)); (yyval.returntype_)->line_number = (yyloc).first_line; (yyval.returntype_)->char_number = (yyloc).first_column; result->returntype_ = (yyval.returntype_); }
#line 1720 "Parser.C"
    break;

  case 23: /* ThrowType: %empty  */
#line 278 "Stella.y"
                        { (yyval.throwtype_) = new Stella::NoThrowType(); (yyval.throwtype_)->line_number = (yyloc).first_line; (yyval.throwtype_)->char_number = (yyloc).first_column; result->throwtype_ = (yyval.throwtype_); }
#line 1726 "Parser.C"
    break;

  case 24: /* ThrowType: _KW_throws ListType9  */
#line 279 "Stella.y"
                         { std::reverse((yyvsp[0].listtype_)->begin(),(yyvsp[0].listtype_)->end()) ;(yyval.throwtype_) = new Stella::SomeThrowType((yyvsp[0].listtype_)); (yyval.throwtype_)->line_number = (yyloc).first_line; (yyval.throwtype_)->char_number = (yyloc).first_column; result->throwtype_ = (yyval.throwtype_); }
#line 1732 "Parser.C"
    break;

  case 25: /* Type9: Type  */
#line 281 "Stella.y"
             { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 1738 "Parser.C"
    break;

  case 26: /* ListType9: Type9  */
#line 283 "Stella.y"
                  { (yyval.listtype_) = new Stella::ListType(); (yyval.listtype_)->push_back((yyvsp[0].type_)); result->listtype_ = (yyval.listtype_); }
#line 1744 "Parser.C"
    break;

  case 27: /* ListType9: Type9 _COMMA ListType9  */
#line 284 "Stella.y"
                           { (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)); (yyval.listtype_) = (yyvsp[0].listtype_); result->listtype_ = (yyval.listtype_); }
#line 1750 "Parser.C"
    break;

  case 28: /* MatchCase: Pattern _RDARROW Expr  */
#line 286 "Stella.y"
                                  { (yyval.matchcase_) = new Stella::AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); (yyval.matchcase_)->line_number = (yyloc).first_line; (yyval.matchcase_)->char_number = (yyloc).first_column; result->matchcase_ = (yyval.matchcase_); }
#line 1756 "Parser.C"
    break;

  case 29: /* ListMatchCase: %empty  */
#line 288 "Stella.y"
                            { (yyval.listmatchcase_) = new Stella::ListMatchCase(); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1762 "Parser.C"
    break;

  case 30: /* ListMatchCase: MatchCase  */
#line 289 "Stella.y"
              { (yyval.listmatchcase_) = new Stella::ListMatchCase(); (yyval.listmatchcase_)->push_back((yyvsp[0].matchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1768 "Parser.C"
    break;

  case 31: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 290 "Stella.y"
                                 { (yyvsp[0].listmatchcase_)->push_back((yyvsp[-2].matchcase_)); (yyval.listmatchcase_) = (yyvsp[0].listmatchcase_); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1774 "Parser.C"
    break;

  case 32: /* OptionalTyping: %empty  */
#line 292 "Stella.y"
                             { (yyval.optionaltyping_) = new Stella::NoTyping(); (yyval.optionaltyping_)->line_number = (yyloc).first_line; (yyval.optionaltyping_)->char_number = (yyloc).first_column; result->optionaltyping_ = (yyval.optionaltyping_); }
#line 1780 "Parser.C"
    break;

  case 33: /* OptionalTyping: _COLON Type  */
#line 293 "Stella.y"
                { (yyval.optionaltyping_) = new Stella::SomeTyping((yyvsp[0].type_)); (yyval.optionaltyping_)->line_number = (yyloc).first_line; (yyval.optionaltyping_)->char_number = (yyloc).first_column; result->optionaltyping_ = (yyval.optionaltyping_); }
#line 1786 "Parser.C"
    break;

  case 34: /* PatternData: %empty  */
#line 295 "Stella.y"
                          { (yyval.patterndata_) = new Stella::NoPatternData(); (yyval.patterndata_)->line_number = (yyloc).first_line; (yyval.patterndata_)->char_number = (yyloc).first_column; result->patterndata_ = (yyval.patterndata_); }
#line 1792 "Parser.C"
    break;

  case 35: /* PatternData: _EQ Pattern  */
#line 296 "Stella.y"
                { (yyval.patterndata_) = new Stella::SomePatternData((yyvsp[0].pattern_)); (yyval.patterndata_)->line_number = (yyloc).first_line; (yyval.patterndata_)->char_number = (yyloc).first_column; result->patterndata_ = (yyval.patterndata_); }
#line 1798 "Parser.C"
    break;

  case 36: /* ExprData: %empty  */
#line 298 "Stella.y"
                       { (yyval.exprdata_) = new Stella::NoExprData(); (yyval.exprdata_)->line_number = (yyloc).first_line; (yyval.exprdata_)->char_number = (yyloc).first_column; result->exprdata_ = (yyval.exprdata_); }
#line 1804 "Parser.C"
    break;

  case 37: /* ExprData: _EQ Expr  */
#line 299 "Stella.y"
             { (yyval.exprdata_) = new Stella::SomeExprData((yyvsp[0].expr_)); (yyval.exprdata_)->line_number = (yyloc).first_line; (yyval.exprdata_)->char_number = (yyloc).first_column; result->exprdata_ = (yyval.exprdata_); }
#line 1810 "Parser.C"
    break;

  case 38: /* Pattern: _SYMB_11 T_StellaIdent PatternData _SYMB_12  */
#line 301 "Stella.y"
                                                      { (yyval.pattern_) = new Stella::PatternVariant((yyvsp[-2]._string), (yyvsp[-1].patterndata_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1816 "Parser.C"
    break;

  case 39: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 302 "Stella.y"
                                    { (yyval.pattern_) = new Stella::PatternInl((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1822 "Parser.C"
    break;

  case 40: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 303 "Stella.y"
                                    { (yyval.pattern_) = new Stella::PatternInr((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1828 "Parser.C"
    break;

  case 41: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 304 "Stella.y"
                                { std::reverse((yyvsp[-1].listpattern_)->begin(),(yyvsp[-1].listpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternTuple((yyvsp[-1].listpattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1834 "Parser.C"
    break;

  case 42: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 305 "Stella.y"
                                        { std::reverse((yyvsp[-1].listlabelledpattern_)->begin(),(yyvsp[-1].listlabelledpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternRecord((yyvsp[-1].listlabelledpattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1840 "Parser.C"
    break;

  case 43: /* Pattern: _LBRACK ListPattern _RBRACK  */
#line 306 "Stella.y"
                                { std::reverse((yyvsp[-1].listpattern_)->begin(),(yyvsp[-1].listpattern_)->end()) ;(yyval.pattern_) = new Stella::PatternList((yyvsp[-1].listpattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1846 "Parser.C"
    break;

  case 44: /* Pattern: _LPAREN Pattern _COMMA Pattern _RPAREN  */
#line 307 "Stella.y"
                                           { (yyval.pattern_) = new Stella::PatternCons((yyvsp[-3].pattern_), (yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1852 "Parser.C"
    break;

  case 45: /* Pattern: _KW_false  */
#line 308 "Stella.y"
              { (yyval.pattern_) = new Stella::PatternFalse(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1858 "Parser.C"
    break;

  case 46: /* Pattern: _KW_true  */
#line 309 "Stella.y"
             { (yyval.pattern_) = new Stella::PatternTrue(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1864 "Parser.C"
    break;

  case 47: /* Pattern: _KW_unit  */
#line 310 "Stella.y"
             { (yyval.pattern_) = new Stella::PatternUnit(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1870 "Parser.C"
    break;

  case 48: /* Pattern: _INTEGER_  */
#line 311 "Stella.y"
              { (yyval.pattern_) = new Stella::PatternInt((yyvsp[0]._int)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1876 "Parser.C"
    break;

  case 49: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 312 "Stella.y"
                                     { (yyval.pattern_) = new Stella::PatternSucc((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1882 "Parser.C"
    break;

  case 50: /* Pattern: T_StellaIdent  */
#line 313 "Stella.y"
                  { (yyval.pattern_) = new Stella::PatternVar((yyvsp[0]._string)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1888 "Parser.C"
    break;

  case 51: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 314 "Stella.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1894 "Parser.C"
    break;

  case 52: /* ListPattern: %empty  */
#line 316 "Stella.y"
                          { (yyval.listpattern_) = new Stella::ListPattern(); result->listpattern_ = (yyval.listpattern_); }
#line 1900 "Parser.C"
    break;

  case 53: /* ListPattern: Pattern  */
#line 317 "Stella.y"
            { (yyval.listpattern_) = new Stella::ListPattern(); (yyval.listpattern_)->push_back((yyvsp[0].pattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 1906 "Parser.C"
    break;

  case 54: /* ListPattern: Pattern _COMMA ListPattern  */
#line 318 "Stella.y"
                               { (yyvsp[0].listpattern_)->push_back((yyvsp[-2].pattern_)); (yyval.listpattern_) = (yyvsp[0].listpattern_); result->listpattern_ = (yyval.listpattern_); }
#line 1912 "Parser.C"
    break;

  case 55: /* LabelledPattern: T_StellaIdent _EQ Pattern  */
#line 320 "Stella.y"
                                            { (yyval.labelledpattern_) = new Stella::ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); (yyval.labelledpattern_)->line_number = (yyloc).first_line; (yyval.labelledpattern_)->char_number = (yyloc).first_column; result->labelledpattern_ = (yyval.labelledpattern_); }
#line 1918 "Parser.C"
    break;

  case 56: /* ListLabelledPattern: LabelledPattern  */
#line 322 "Stella.y"
                                      { (yyval.listlabelledpattern_) = new Stella::ListLabelledPattern(); (yyval.listlabelledpattern_)->push_back((yyvsp[0].labelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 1924 "Parser.C"
    break;

  case 57: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 323 "Stella.y"
                                               { (yyvsp[0].listlabelledpattern_)->push_back((yyvsp[-2].labelledpattern_)); (yyval.listlabelledpattern_) = (yyvsp[0].listlabelledpattern_); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 1930 "Parser.C"
    break;

  case 58: /* Binding: T_StellaIdent _EQ Expr  */
#line 325 "Stella.y"
                                 { (yyval.binding_) = new Stella::ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); (yyval.binding_)->line_number = (yyloc).first_line; (yyval.binding_)->char_number = (yyloc).first_column; result->binding_ = (yyval.binding_); }
#line 1936 "Parser.C"
    break;

  case 59: /* ListBinding: Binding  */
#line 327 "Stella.y"
                      { (yyval.listbinding_) = new Stella::ListBinding(); (yyval.listbinding_)->push_back((yyvsp[0].binding_)); result->listbinding_ = (yyval.listbinding_); }
#line 1942 "Parser.C"
    break;

  case 60: /* ListBinding: Binding _COMMA ListBinding  */
#line 328 "Stella.y"
                               { (yyvsp[0].listbinding_)->push_back((yyvsp[-2].binding_)); (yyval.listbinding_) = (yyvsp[0].listbinding_); result->listbinding_ = (yyval.listbinding_); }
#line 1948 "Parser.C"
    break;

  case 61: /* Expr: Expr1 _SEMI Expr  */
#line 330 "Stella.y"
                        { (yyval.expr_) = new Stella::Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1954 "Parser.C"
    break;

  case 62: /* Expr: Expr1 _SEMI  */
#line 331 "Stella.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1960 "Parser.C"
    break;

  case 63: /* Expr: Expr1  */
#line 332 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1966 "Parser.C"
    break;

  case 64: /* ListExpr: %empty  */
#line 334 "Stella.y"
                       { (yyval.listexpr_) = new Stella::ListExpr(); result->listexpr_ = (yyval.listexpr_); }
#line 1972 "Parser.C"
    break;

  case 65: /* ListExpr: Expr  */
#line 335 "Stella.y"
         { (yyval.listexpr_) = new Stella::ListExpr(); (yyval.listexpr_)->push_back((yyvsp[0].expr_)); result->listexpr_ = (yyval.listexpr_); }
#line 1978 "Parser.C"
    break;

  case 66: /* ListExpr: Expr _COMMA ListExpr  */
#line 336 "Stella.y"
                         { (yyvsp[0].listexpr_)->push_back((yyvsp[-2].expr_)); (yyval.listexpr_) = (yyvsp[0].listexpr_); result->listexpr_ = (yyval.listexpr_); }
#line 1984 "Parser.C"
    break;

  case 67: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 338 "Stella.y"
                                                   { (yyval.expr_) = new Stella::If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1990 "Parser.C"
    break;

  case 68: /* Expr1: _KW_let ListPatternBinding _KW_in Expr1  */
#line 339 "Stella.y"
                                            { std::reverse((yyvsp[-2].listpatternbinding_)->begin(),(yyvsp[-2].listpatternbinding_)->end()) ;(yyval.expr_) = new Stella::Let((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1996 "Parser.C"
    break;

  case 69: /* Expr1: _KW_letrec ListPatternBinding _KW_in Expr1  */
#line 340 "Stella.y"
                                               { std::reverse((yyvsp[-2].listpatternbinding_)->begin(),(yyvsp[-2].listpatternbinding_)->end()) ;(yyval.expr_) = new Stella::LetRec((yyvsp[-2].listpatternbinding_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2002 "Parser.C"
    break;

  case 70: /* Expr1: Expr2  */
#line 341 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2008 "Parser.C"
    break;

  case 71: /* PatternBinding: Pattern _EQ Expr  */
#line 343 "Stella.y"
                                  { (yyval.patternbinding_) = new Stella::APatternBinding((yyvsp[-2].pattern_), (yyvsp[0].expr_)); (yyval.patternbinding_)->line_number = (yyloc).first_line; (yyval.patternbinding_)->char_number = (yyloc).first_column; result->patternbinding_ = (yyval.patternbinding_); }
#line 2014 "Parser.C"
    break;

  case 72: /* ListPatternBinding: PatternBinding  */
#line 345 "Stella.y"
                                    { (yyval.listpatternbinding_) = new Stella::ListPatternBinding(); (yyval.listpatternbinding_)->push_back((yyvsp[0].patternbinding_)); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2020 "Parser.C"
    break;

  case 73: /* ListPatternBinding: PatternBinding _COMMA ListPatternBinding  */
#line 346 "Stella.y"
                                             { (yyvsp[0].listpatternbinding_)->push_back((yyvsp[-2].patternbinding_)); (yyval.listpatternbinding_) = (yyvsp[0].listpatternbinding_); result->listpatternbinding_ = (yyval.listpatternbinding_); }
#line 2026 "Parser.C"
    break;

  case 74: /* Expr2: Expr3 _LT Expr3  */
#line 348 "Stella.y"
                        { (yyval.expr_) = new Stella::LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2032 "Parser.C"
    break;

  case 75: /* Expr2: Expr3 _LDARROW Expr3  */
#line 349 "Stella.y"
                         { (yyval.expr_) = new Stella::LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2038 "Parser.C"
    break;

  case 76: /* Expr2: Expr3 _GT Expr3  */
#line 350 "Stella.y"
                    { (yyval.expr_) = new Stella::GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2044 "Parser.C"
    break;

  case 77: /* Expr2: Expr3 _GTEQ Expr3  */
#line 351 "Stella.y"
                      { (yyval.expr_) = new Stella::GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2050 "Parser.C"
    break;

  case 78: /* Expr2: Expr3 _DEQ Expr3  */
#line 352 "Stella.y"
                     { (yyval.expr_) = new Stella::Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2056 "Parser.C"
    break;

  case 79: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 353 "Stella.y"
                        { (yyval.expr_) = new Stella::NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2062 "Parser.C"
    break;

  case 80: /* Expr2: Expr3  */
#line 354 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2068 "Parser.C"
    break;

  case 81: /* Expr3: Expr3 _KW_as Type2  */
#line 359 "Stella.y"
                           { (yyval.expr_) = new Stella::TypeAsc((yyvsp[-2].expr_), (yyvsp[0].type_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2074 "Parser.C"
    break;

  case 82: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 360 "Stella.y"
                                                                         { std::reverse((yyvsp[-5].listparamdecl_)->begin(),(yyvsp[-5].listparamdecl_)->end()) ;(yyval.expr_) = new Stella::Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2080 "Parser.C"
    break;

  case 83: /* Expr3: _SYMB_11 T_StellaIdent ExprData _SYMB_12  */
#line 361 "Stella.y"
                                             { (yyval.expr_) = new Stella::Variant((yyvsp[-2]._string), (yyvsp[-1].exprdata_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2086 "Parser.C"
    break;

  case 84: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 362 "Stella.y"
                                                  { std::reverse((yyvsp[-1].listmatchcase_)->begin(),(yyvsp[-1].listmatchcase_)->end()) ;(yyval.expr_) = new Stella::Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2092 "Parser.C"
    break;

  case 85: /* Expr3: _LBRACK ListExpr _RBRACK  */
#line 363 "Stella.y"
                             { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::List((yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2098 "Parser.C"
    break;

  case 86: /* Expr3: Expr3 _PLUS Expr4  */
#line 364 "Stella.y"
                      { (yyval.expr_) = new Stella::Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2104 "Parser.C"
    break;

  case 87: /* Expr3: Expr3 _MINUS Expr4  */
#line 365 "Stella.y"
                       { (yyval.expr_) = new Stella::Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2110 "Parser.C"
    break;

  case 88: /* Expr3: Expr3 _KW_or Expr4  */
#line 366 "Stella.y"
                       { (yyval.expr_) = new Stella::LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2116 "Parser.C"
    break;

  case 89: /* Expr3: Expr4  */
#line 367 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2122 "Parser.C"
    break;

  case 90: /* Expr4: Expr4 _STAR Expr5  */
#line 369 "Stella.y"
                          { (yyval.expr_) = new Stella::Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2128 "Parser.C"
    break;

  case 91: /* Expr4: Expr4 _SLASH Expr5  */
#line 370 "Stella.y"
                       { (yyval.expr_) = new Stella::Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2134 "Parser.C"
    break;

  case 92: /* Expr4: Expr4 _KW_and Expr5  */
#line 371 "Stella.y"
                        { (yyval.expr_) = new Stella::LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2140 "Parser.C"
    break;

  case 93: /* Expr4: Expr5  */
#line 372 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2146 "Parser.C"
    break;

  case 94: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 374 "Stella.y"
                                       { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2152 "Parser.C"
    break;

  case 95: /* Expr6: Expr6 _DOT T_StellaIdent  */
#line 375 "Stella.y"
                             { (yyval.expr_) = new Stella::DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2158 "Parser.C"
    break;

  case 96: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 376 "Stella.y"
                         { (yyval.expr_) = new Stella::DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2164 "Parser.C"
    break;

  case 97: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 377 "Stella.y"
                             { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Stella::Tuple((yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2170 "Parser.C"
    break;

  case 98: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 378 "Stella.y"
                                { std::reverse((yyvsp[-1].listbinding_)->begin(),(yyvsp[-1].listbinding_)->end()) ;(yyval.expr_) = new Stella::Record((yyvsp[-1].listbinding_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2176 "Parser.C"
    break;

  case 99: /* Expr6: _KW_cons _LPAREN Expr _COMMA Expr _RPAREN  */
#line 379 "Stella.y"
                                              { (yyval.expr_) = new Stella::ConsList((yyvsp[-3].expr_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2182 "Parser.C"
    break;

  case 100: /* Expr6: _SYMB_26 _LPAREN Expr _RPAREN  */
#line 380 "Stella.y"
                                  { (yyval.expr_) = new Stella::Head((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2188 "Parser.C"
    break;

  case 101: /* Expr6: _SYMB_27 _LPAREN Expr _RPAREN  */
#line 381 "Stella.y"
                                  { (yyval.expr_) = new Stella::IsEmpty((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2194 "Parser.C"
    break;

  case 102: /* Expr6: _SYMB_28 _LPAREN Expr _RPAREN  */
#line 382 "Stella.y"
                                  { (yyval.expr_) = new Stella::Tail((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2200 "Parser.C"
    break;

  case 103: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 383 "Stella.y"
                                 { (yyval.expr_) = new Stella::Inl((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2206 "Parser.C"
    break;

  case 104: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 384 "Stella.y"
                                 { (yyval.expr_) = new Stella::Inr((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2212 "Parser.C"
    break;

  case 105: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 385 "Stella.y"
                                  { (yyval.expr_) = new Stella::Succ((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2218 "Parser.C"
    break;

  case 106: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 386 "Stella.y"
                                 { (yyval.expr_) = new Stella::LogicNot((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2224 "Parser.C"
    break;

  case 107: /* Expr6: _SYMB_29 _LPAREN Expr _RPAREN  */
#line 387 "Stella.y"
                                  { (yyval.expr_) = new Stella::Pred((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2230 "Parser.C"
    break;

  case 108: /* Expr6: _SYMB_30 _LPAREN Expr _RPAREN  */
#line 388 "Stella.y"
                                  { (yyval.expr_) = new Stella::IsZero((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2236 "Parser.C"
    break;

  case 109: /* Expr6: _KW_fix _LPAREN Expr _RPAREN  */
#line 389 "Stella.y"
                                 { (yyval.expr_) = new Stella::Fix((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2242 "Parser.C"
    break;

  case 110: /* Expr6: _SYMB_31 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 390 "Stella.y"
                                                          { (yyval.expr_) = new Stella::NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2248 "Parser.C"
    break;

  case 111: /* Expr6: _KW_fold _LBRACK Type _RBRACK Expr7  */
#line 391 "Stella.y"
                                        { (yyval.expr_) = new Stella::Fold((yyvsp[-2].type_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2254 "Parser.C"
    break;

  case 112: /* Expr6: _KW_unfold _LBRACK Type _RBRACK Expr7  */
#line 392 "Stella.y"
                                          { (yyval.expr_) = new Stella::Unfold((yyvsp[-2].type_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2260 "Parser.C"
    break;

  case 113: /* Expr6: Expr7  */
#line 393 "Stella.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2266 "Parser.C"
    break;

  case 114: /* Expr7: _KW_true  */
#line 395 "Stella.y"
                 { (yyval.expr_) = new Stella::ConstTrue(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2272 "Parser.C"
    break;

  case 115: /* Expr7: _KW_false  */
#line 396 "Stella.y"
              { (yyval.expr_) = new Stella::ConstFalse(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2278 "Parser.C"
    break;

  case 116: /* Expr7: _KW_unit  */
#line 397 "Stella.y"
             { (yyval.expr_) = new Stella::ConstUnit(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2284 "Parser.C"
    break;

  case 117: /* Expr7: _INTEGER_  */
#line 398 "Stella.y"
              { (yyval.expr_) = new Stella::ConstInt((yyvsp[0]._int)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2290 "Parser.C"
    break;

  case 118: /* Expr7: T_StellaIdent  */
#line 399 "Stella.y"
                  { (yyval.expr_) = new Stella::Var((yyvsp[0]._string)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2296 "Parser.C"
    break;

  case 119: /* Expr7: _LPAREN Expr _RPAREN  */
#line 400 "Stella.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2302 "Parser.C"
    break;

  case 120: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 402 "Stella.y"
                                                    { std::reverse((yyvsp[-3].listtype_)->begin(),(yyvsp[-3].listtype_)->end()) ;(yyval.type_) = new Stella::TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2308 "Parser.C"
    break;

  case 121: /* Type: _KW_65 T_StellaIdent _DOT Type  */
#line 403 "Stella.y"
                                   { (yyval.type_) = new Stella::TypeRec((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2314 "Parser.C"
    break;

  case 122: /* Type: Type1  */
#line 404 "Stella.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2320 "Parser.C"
    break;

  case 123: /* Type1: Type2 _PLUS Type2  */
#line 406 "Stella.y"
                          { (yyval.type_) = new Stella::TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2326 "Parser.C"
    break;

  case 124: /* Type1: Type2  */
#line 407 "Stella.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2332 "Parser.C"
    break;

  case 125: /* Type2: _LBRACE ListType _RBRACE  */
#line 409 "Stella.y"
                                 { std::reverse((yyvsp[-1].listtype_)->begin(),(yyvsp[-1].listtype_)->end()) ;(yyval.type_) = new Stella::TypeTuple((yyvsp[-1].listtype_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2338 "Parser.C"
    break;

  case 126: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 410 "Stella.y"
                                        { std::reverse((yyvsp[-1].listrecordfieldtype_)->begin(),(yyvsp[-1].listrecordfieldtype_)->end()) ;(yyval.type_) = new Stella::TypeRecord((yyvsp[-1].listrecordfieldtype_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2344 "Parser.C"
    break;

  case 127: /* Type2: _SYMB_11 ListVariantFieldType _SYMB_12  */
#line 411 "Stella.y"
                                           { std::reverse((yyvsp[-1].listvariantfieldtype_)->begin(),(yyvsp[-1].listvariantfieldtype_)->end()) ;(yyval.type_) = new Stella::TypeVariant((yyvsp[-1].listvariantfieldtype_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2350 "Parser.C"
    break;

  case 128: /* Type2: _LBRACK Type _RBRACK  */
#line 412 "Stella.y"
                         { (yyval.type_) = new Stella::TypeList((yyvsp[-1].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2356 "Parser.C"
    break;

  case 129: /* Type2: Type3  */
#line 413 "Stella.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2362 "Parser.C"
    break;

  case 130: /* Type3: _KW_Bool  */
#line 415 "Stella.y"
                 { (yyval.type_) = new Stella::TypeBool(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2368 "Parser.C"
    break;

  case 131: /* Type3: _KW_Nat  */
#line 416 "Stella.y"
            { (yyval.type_) = new Stella::TypeNat(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2374 "Parser.C"
    break;

  case 132: /* Type3: _KW_Unit  */
#line 417 "Stella.y"
             { (yyval.type_) = new Stella::TypeUnit(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2380 "Parser.C"
    break;

  case 133: /* Type3: T_StellaIdent  */
#line 418 "Stella.y"
                  { (yyval.type_) = new Stella::TypeVar((yyvsp[0]._string)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2386 "Parser.C"
    break;

  case 134: /* Type3: _LPAREN Type _RPAREN  */
#line 419 "Stella.y"
                         { (yyval.type_) = (yyvsp[-1].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2392 "Parser.C"
    break;

  case 135: /* ListType: %empty  */
#line 421 "Stella.y"
                       { (yyval.listtype_) = new Stella::ListType(); result->listtype_ = (yyval.listtype_); }
#line 2398 "Parser.C"
    break;

  case 136: /* ListType: Type  */
#line 422 "Stella.y"
         { (yyval.listtype_) = new Stella::ListType(); (yyval.listtype_)->push_back((yyvsp[0].type_)); result->listtype_ = (yyval.listtype_); }
#line 2404 "Parser.C"
    break;

  case 137: /* ListType: Type _COMMA ListType  */
#line 423 "Stella.y"
                         { (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)); (yyval.listtype_) = (yyvsp[0].listtype_); result->listtype_ = (yyval.listtype_); }
#line 2410 "Parser.C"
    break;

  case 138: /* Expr5: Expr6  */
#line 425 "Stella.y"
              { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2416 "Parser.C"
    break;

  case 139: /* VariantFieldType: T_StellaIdent OptionalTyping  */
#line 427 "Stella.y"
                                                { (yyval.variantfieldtype_) = new Stella::AVariantFieldType((yyvsp[-1]._string), (yyvsp[0].optionaltyping_)); (yyval.variantfieldtype_)->line_number = (yyloc).first_line; (yyval.variantfieldtype_)->char_number = (yyloc).first_column; result->variantfieldtype_ = (yyval.variantfieldtype_); }
#line 2422 "Parser.C"
    break;

  case 140: /* ListVariantFieldType: %empty  */
#line 429 "Stella.y"
                                   { (yyval.listvariantfieldtype_) = new Stella::ListVariantFieldType(); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2428 "Parser.C"
    break;

  case 141: /* ListVariantFieldType: VariantFieldType  */
#line 430 "Stella.y"
                     { (yyval.listvariantfieldtype_) = new Stella::ListVariantFieldType(); (yyval.listvariantfieldtype_)->push_back((yyvsp[0].variantfieldtype_)); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2434 "Parser.C"
    break;

  case 142: /* ListVariantFieldType: VariantFieldType _COMMA ListVariantFieldType  */
#line 431 "Stella.y"
                                                 { (yyvsp[0].listvariantfieldtype_)->push_back((yyvsp[-2].variantfieldtype_)); (yyval.listvariantfieldtype_) = (yyvsp[0].listvariantfieldtype_); result->listvariantfieldtype_ = (yyval.listvariantfieldtype_); }
#line 2440 "Parser.C"
    break;

  case 143: /* RecordFieldType: T_StellaIdent _COLON Type  */
#line 433 "Stella.y"
                                            { (yyval.recordfieldtype_) = new Stella::ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.recordfieldtype_)->line_number = (yyloc).first_line; (yyval.recordfieldtype_)->char_number = (yyloc).first_column; result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 2446 "Parser.C"
    break;

  case 144: /* ListRecordFieldType: RecordFieldType  */
#line 435 "Stella.y"
                                      { (yyval.listrecordfieldtype_) = new Stella::ListRecordFieldType(); (yyval.listrecordfieldtype_)->push_back((yyvsp[0].recordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2452 "Parser.C"
    break;

  case 145: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 436 "Stella.y"
                                               { (yyvsp[0].listrecordfieldtype_)->push_back((yyvsp[-2].recordfieldtype_)); (yyval.listrecordfieldtype_) = (yyvsp[0].listrecordfieldtype_); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2458 "Parser.C"
    break;


#line 2462 "Parser.C"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 441 "Stella.y"


namespace Stella
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program* from string. */
Program* psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse ListStellaIdent* from file. */
ListStellaIdent* pListStellaIdent(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststellaident_->begin(), result.liststellaident_->end());
    return result.liststellaident_;
  }
}

/* Entrypoint: parse ListStellaIdent* from string. */
ListStellaIdent* psListStellaIdent(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststellaident_->begin(), result.liststellaident_->end());
    return result.liststellaident_;
  }
}

/* Entrypoint: parse LanguageDecl* from file. */
LanguageDecl* pLanguageDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse LanguageDecl* from string. */
LanguageDecl* psLanguageDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse Extension* from file. */
Extension* pExtension(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.extension_;
  }
}

/* Entrypoint: parse Extension* from string. */
Extension* psExtension(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.extension_;
  }
}

/* Entrypoint: parse ListExtensionName* from file. */
ListExtensionName* pListExtensionName(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listextensionname_->begin(), result.listextensionname_->end());
    return result.listextensionname_;
  }
}

/* Entrypoint: parse ListExtensionName* from string. */
ListExtensionName* psListExtensionName(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listextensionname_->begin(), result.listextensionname_->end());
    return result.listextensionname_;
  }
}

/* Entrypoint: parse ListExtension* from file. */
ListExtension* pListExtension(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listextension_;
  }
}

/* Entrypoint: parse ListExtension* from string. */
ListExtension* psListExtension(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listextension_;
  }
}

/* Entrypoint: parse Decl* from file. */
Decl* pDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse Decl* from string. */
Decl* psDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse ListDecl* from file. */
ListDecl* pListDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdecl_;
  }
}

/* Entrypoint: parse ListDecl* from string. */
ListDecl* psListDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdecl_;
  }
}

/* Entrypoint: parse LocalDecl* from file. */
LocalDecl* pLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse LocalDecl* from string. */
LocalDecl* psLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse ListLocalDecl* from file. */
ListLocalDecl* pListLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlocaldecl_;
  }
}

/* Entrypoint: parse ListLocalDecl* from string. */
ListLocalDecl* psListLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlocaldecl_;
  }
}

/* Entrypoint: parse Annotation* from file. */
Annotation* pAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse Annotation* from string. */
Annotation* psAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse ListAnnotation* from file. */
ListAnnotation* pListAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listannotation_;
  }
}

/* Entrypoint: parse ListAnnotation* from string. */
ListAnnotation* psListAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listannotation_;
  }
}

/* Entrypoint: parse ParamDecl* from file. */
ParamDecl* pParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ParamDecl* from string. */
ParamDecl* psParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ListParamDecl* from file. */
ListParamDecl* pListParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparamdecl_->begin(), result.listparamdecl_->end());
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ListParamDecl* from string. */
ListParamDecl* psListParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparamdecl_->begin(), result.listparamdecl_->end());
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ReturnType* from file. */
ReturnType* pReturnType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse ReturnType* from string. */
ReturnType* psReturnType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse ThrowType* from file. */
ThrowType* pThrowType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.throwtype_;
  }
}

/* Entrypoint: parse ThrowType* from string. */
ThrowType* psThrowType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.throwtype_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse MatchCase* from file. */
MatchCase* pMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse MatchCase* from string. */
MatchCase* psMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse ListMatchCase* from file. */
ListMatchCase* pListMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listmatchcase_->begin(), result.listmatchcase_->end());
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse ListMatchCase* from string. */
ListMatchCase* psListMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listmatchcase_->begin(), result.listmatchcase_->end());
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse OptionalTyping* from file. */
OptionalTyping* pOptionalTyping(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optionaltyping_;
  }
}

/* Entrypoint: parse OptionalTyping* from string. */
OptionalTyping* psOptionalTyping(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optionaltyping_;
  }
}

/* Entrypoint: parse PatternData* from file. */
PatternData* pPatternData(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patterndata_;
  }
}

/* Entrypoint: parse PatternData* from string. */
PatternData* psPatternData(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patterndata_;
  }
}

/* Entrypoint: parse ExprData* from file. */
ExprData* pExprData(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exprdata_;
  }
}

/* Entrypoint: parse ExprData* from string. */
ExprData* psExprData(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exprdata_;
  }
}

/* Entrypoint: parse Pattern* from file. */
Pattern* pPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse Pattern* from string. */
Pattern* psPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse ListPattern* from file. */
ListPattern* pListPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpattern_->begin(), result.listpattern_->end());
    return result.listpattern_;
  }
}

/* Entrypoint: parse ListPattern* from string. */
ListPattern* psListPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpattern_->begin(), result.listpattern_->end());
    return result.listpattern_;
  }
}

/* Entrypoint: parse LabelledPattern* from file. */
LabelledPattern* pLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse LabelledPattern* from string. */
LabelledPattern* psLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern* from file. */
ListLabelledPattern* pListLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelledpattern_->begin(), result.listlabelledpattern_->end());
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern* from string. */
ListLabelledPattern* psListLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelledpattern_->begin(), result.listlabelledpattern_->end());
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse Binding* from file. */
Binding* pBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse Binding* from string. */
Binding* psBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse ListBinding* from file. */
ListBinding* pListBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listbinding_->begin(), result.listbinding_->end());
    return result.listbinding_;
  }
}

/* Entrypoint: parse ListBinding* from string. */
ListBinding* psListBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listbinding_->begin(), result.listbinding_->end());
    return result.listbinding_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr* from file. */
ListExpr* pListExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr* from string. */
ListExpr* psListExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse PatternBinding* from file. */
PatternBinding* pPatternBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patternbinding_;
  }
}

/* Entrypoint: parse PatternBinding* from string. */
PatternBinding* psPatternBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.patternbinding_;
  }
}

/* Entrypoint: parse ListPatternBinding* from file. */
ListPatternBinding* pListPatternBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpatternbinding_->begin(), result.listpatternbinding_->end());
    return result.listpatternbinding_;
  }
}

/* Entrypoint: parse ListPatternBinding* from string. */
ListPatternBinding* psListPatternBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpatternbinding_->begin(), result.listpatternbinding_->end());
    return result.listpatternbinding_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr* from file. */
ListExpr* pListExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr* from string. */
ListExpr* psListExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse VariantFieldType* from file. */
VariantFieldType* pVariantFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfieldtype_;
  }
}

/* Entrypoint: parse VariantFieldType* from string. */
VariantFieldType* psVariantFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variantfieldtype_;
  }
}

/* Entrypoint: parse ListVariantFieldType* from file. */
ListVariantFieldType* pListVariantFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvariantfieldtype_->begin(), result.listvariantfieldtype_->end());
    return result.listvariantfieldtype_;
  }
}

/* Entrypoint: parse ListVariantFieldType* from string. */
ListVariantFieldType* psListVariantFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listvariantfieldtype_->begin(), result.listvariantfieldtype_->end());
    return result.listvariantfieldtype_;
  }
}

/* Entrypoint: parse RecordFieldType* from file. */
RecordFieldType* pRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse RecordFieldType* from string. */
RecordFieldType* psRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType* from file. */
ListRecordFieldType* pListRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfieldtype_->begin(), result.listrecordfieldtype_->end());
    return result.listrecordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType* from string. */
ListRecordFieldType* psListRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfieldtype_->begin(), result.listrecordfieldtype_->end());
    return result.listrecordfieldtype_;
  }
}

/* Entrypoint: parse Typing* from file. */
Typing* pTyping(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typing_;
  }
}

/* Entrypoint: parse Typing* from string. */
Typing* psTyping(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Stella_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Stella_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Stella_delete_buffer(buf, scanner);
  Stellalex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typing_;
  }
}


}
