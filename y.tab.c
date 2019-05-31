/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "test.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#define returnDollarLEN 100

#line 72 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEAN = 258,
    BREAK = 259,
    BYTE = 260,
    CASE = 261,
    CHAR = 262,
    CATCH = 263,
    CLASS = 264,
    CONST = 265,
    CONTINUE = 266,
    DEFAULT = 267,
    DO = 268,
    DOUBLE = 269,
    ELSE = 270,
    EXTENDS = 271,
    FALSE2 = 272,
    FINAL = 273,
    FINALLY = 274,
    FLOAT = 275,
    FOR = 276,
    IF = 277,
    IMPLEMENTS = 278,
    INT = 279,
    LONG = 280,
    MAIN = 281,
    NEW = 282,
    PRINT = 283,
    PRIVATE = 284,
    PROTECTED = 285,
    PUBLIC = 286,
    RETURN = 287,
    SHORT = 288,
    STATIC = 289,
    STRING = 290,
    SWITCH = 291,
    THIS = 292,
    TRUE2 = 293,
    TRY = 294,
    VOID = 295,
    WHILE = 296,
    READ = 297,
    INTEGER = 298,
    REAL = 299,
    ID = 300,
    PPLUS = 301,
    MMINUS = 302,
    SEQUAL = 303,
    BEQUAL = 304,
    EQUAL = 305,
    NEQUAL = 306,
    AND = 307,
    OR = 308
  };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define BYTE 260
#define CASE 261
#define CHAR 262
#define CATCH 263
#define CLASS 264
#define CONST 265
#define CONTINUE 266
#define DEFAULT 267
#define DO 268
#define DOUBLE 269
#define ELSE 270
#define EXTENDS 271
#define FALSE2 272
#define FINAL 273
#define FINALLY 274
#define FLOAT 275
#define FOR 276
#define IF 277
#define IMPLEMENTS 278
#define INT 279
#define LONG 280
#define MAIN 281
#define NEW 282
#define PRINT 283
#define PRIVATE 284
#define PROTECTED 285
#define PUBLIC 286
#define RETURN 287
#define SHORT 288
#define STATIC 289
#define STRING 290
#define SWITCH 291
#define THIS 292
#define TRUE2 293
#define TRY 294
#define VOID 295
#define WHILE 296
#define READ 297
#define INTEGER 298
#define REAL 299
#define ID 300
#define PPLUS 301
#define MMINUS 302
#define SEQUAL 303
#define BEQUAL 304
#define EQUAL 305
#define NEQUAL 306
#define AND 307
#define OR 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 6 "test.y" /* yacc.c:355  */

	char* s;
	float d;
	int i;

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    70,     2,     2,
      57,    58,    63,    67,    59,    68,    66,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
      64,    60,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    19,    20,    21,    22,    23,    24,    25,
      27,    31,    36,    41,    44,    47,    51,    56,    61,    66,
      71,    76,    82,    88,    94,   100,   104,   108,   112,   117,
     121,   126,   127,   128,   130,   135,   139,   143,   147,   151,
     155,   159,   163,   168,   169,   174,   178,   182,   186,   190,
     194,   198,   202,   207,   208,   213,   214,   215,   216,   217,
     218,   220,   224,   228,   232,   236,   240,   245,   249,   253,
     257,   261,   265,   269,   273,   278,   279,   280,   284,   289,
     290,   294,   298,   303,   303,   303,   303,   303,   303,   305,
     309,   313,   317,   321,   325,   329,   331,   332,   337,   338,
     342,   346,   350,   351,   357,   358,   362,   367,   368,   372,
     378,   383,   384,   385,   389,   392,   395,   397,   405,   413,
     421,   429,   433,   438,   446,   456,   460,   465,   469,   470,
     474,   479,   483,   488,   489
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "BYTE", "CASE",
  "CHAR", "CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "EXTENDS", "FALSE2", "FINAL", "FINALLY", "FLOAT", "FOR", "IF",
  "IMPLEMENTS", "INT", "LONG", "MAIN", "NEW", "PRINT", "PRIVATE",
  "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRING", "SWITCH",
  "THIS", "TRUE2", "TRY", "VOID", "WHILE", "READ", "INTEGER", "REAL", "ID",
  "PPLUS", "MMINUS", "SEQUAL", "BEQUAL", "EQUAL", "NEQUAL", "AND", "OR",
  "';'", "'{'", "'}'", "'('", "')'", "','", "'='", "'['", "']'", "'*'",
  "'<'", "'>'", "'.'", "'+'", "'-'", "'/'", "'%'", "$accept", "readin",
  "declaration", "class_declr", "class_body", "method_declr",
  "method_declr_parem", "method_modifier", "assign", "arrinit",
  "arrinit_expr", "conditional", "boolean_expr", "infixop", "loop",
  "for_parem", "forinitop", "forupdate", "type", "simple", "name",
  "identifier_list", "expr", "term", "factor", "prefixOp", "postfixOp",
  "const_expr", "compound", "function", "func_parem", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    59,   123,   125,    40,    41,    44,
      61,    91,    93,    42,    60,    62,    46,    43,    45,    47,
      37
};
# endif

#define YYPACT_NINF -206

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-206)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -206,   144,  -206,  -206,  -206,   -27,  -206,   -44,   -24,  -206,
     -19,  -206,  -206,  -206,    36,  -206,  -206,   -16,    -9,  -206,
    -206,    95,   -15,    13,  -206,   159,   211,   224,  -206,  -206,
    -206,    36,  -206,     8,  -206,   -35,  -206,    65,   228,  -206,
      80,  -206,  -206,  -206,  -206,    10,   189,   159,   159,    16,
     113,    33,  -206,  -206,   416,    40,  -206,  -206,    44,    29,
    -206,  -206,  -206,  -206,    48,  -206,   278,   -28,    64,    22,
      61,    74,    78,   159,   100,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,   159,   159,   159,   159,   159,   159,   577,    62,
     575,   110,   142,   154,    16,   152,    56,   164,   229,   165,
     486,   170,   167,   172,  -206,   -32,   177,  -206,  -206,   183,
      60,    16,   -20,   178,   179,   200,   190,    16,  -206,  -206,
    -206,     1,  -206,  -206,  -206,     1,  -206,  -206,  -206,   577,
     195,   577,   198,   254,   205,   482,   514,   580,   520,   217,
    -206,   398,  -206,    59,   548,   219,   159,  -206,    79,   108,
     222,   236,  -206,   232,   242,    16,  -206,   244,   257,  -206,
    -206,  -206,  -206,   482,    70,   267,   268,  -206,  -206,   254,
    -206,   398,  -206,   254,   260,   398,   301,  -206,   398,   398,
     262,   398,  -206,  -206,  -206,   122,   265,  -206,   218,   128,
     270,   273,   272,  -206,   307,    36,  -206,  -206,  -206,  -206,
    -206,   284,  -206,   254,   285,   425,  -206,  -206,  -206,   288,
    -206,   263,   139,  -206,   289,  -206,   308,    36,   291,   159,
      36,   286,  -206,  -206,   334,   398,  -206,  -206,  -206,  -206,
     302,  -206,   353,  -206,  -206,   303,  -206,   159,   305,   180,
     296,   320,   453,   310,  -206,  -206,   311,  -206,   312,  -206,
     159,   326,   309,   398,  -206,  -206,  -206,  -206,  -206,  -206,
     316,  -206,   314,  -206,  -206
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     0,     1,    83,    84,     0,    86,     0,     0,    85,
       0,    31,    32,    33,     0,    87,    88,     0,     0,   125,
     126,   111,     0,     0,    95,     0,     0,     0,     2,     4,
       3,     0,     6,     0,     8,     0,     5,     0,     0,   104,
     107,   114,   115,   112,   116,     0,     0,     0,     0,     0,
       0,     0,   123,   124,     0,     0,   117,   118,   111,     0,
     119,   121,   120,   122,     0,     7,    98,     0,     0,   102,
       0,     0,     0,     0,     0,    59,    60,    55,    56,    94,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,    53,     0,    98,     0,
       0,     0,    96,     0,   131,   133,     0,    97,   113,     0,
       0,     0,     0,    99,     0,     0,    37,     0,    10,    92,
      93,    34,    89,   105,   106,    54,   108,   109,   110,    13,
       0,    14,    76,    74,     0,     0,     0,     0,     0,     0,
      11,     0,    63,     0,     0,     0,     0,   132,     0,     0,
       0,     0,   101,     0,     0,     0,    38,    35,     0,   103,
      15,    12,    16,     0,     0,     0,     0,    71,    79,    72,
      77,     0,    65,    73,     0,     0,    45,    90,   127,   128,
       0,     0,    61,    91,   134,     0,     0,    26,     0,     0,
      29,    36,     0,   100,     0,     0,    78,    82,    80,    81,
      68,     0,    69,    70,     0,     0,   129,   130,    64,     0,
      28,     0,     0,    23,     0,    25,     0,     0,     0,     0,
       0,     0,    66,    67,    46,     0,    51,    47,    62,    24,
       0,    27,     0,    19,    21,     0,    30,     0,     0,    43,
       0,     0,     0,     0,    20,    22,     0,    17,     0,    42,
       0,     0,     0,     0,    52,    49,    48,    18,    41,    44,
       0,    40,     0,    39,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,     4,  -206,    68,   371,  -142,  -206,   -30,  -206,
    -205,  -188,   -39,  -206,  -206,  -206,  -126,  -148,     0,     2,
     323,   -47,    -1,   239,  -206,  -206,  -129,   188,  -159,  -206,
     233
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   178,    29,   130,   131,   150,    31,   113,    69,
     238,    32,    33,    84,    34,    92,    93,   167,    94,   179,
      37,    70,   143,    39,    40,    41,    42,    43,   180,    44,
     106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    35,    99,    36,   168,    28,   186,    74,    95,   170,
      66,   101,   201,    46,    49,   114,   204,   226,    45,   206,
     207,   200,   209,   153,    59,   202,    67,   146,    68,   214,
      56,    64,   248,    47,   115,    82,    83,   196,    48,     3,
     168,    50,   154,     4,   168,   259,    96,    97,    51,    96,
      91,   134,   230,   105,   254,   223,     6,   235,    57,   132,
       9,    98,    65,     3,   152,    88,   243,     4,    82,    83,
     159,    15,   121,   246,   168,   236,    16,    67,   102,    68,
       6,   117,     3,   125,     9,   107,     4,   108,    35,    96,
      52,    53,   129,   109,   262,    15,    82,    83,   174,     6,
      16,    54,   142,     9,    75,    76,    77,    78,   193,   116,
     151,    71,    72,    79,    15,   118,    52,    53,   149,    16,
      80,    81,    73,    82,    83,    73,    82,    83,   119,    35,
      73,    35,   120,   129,   197,   129,    96,   185,   172,    91,
     176,    52,    53,    85,     2,   105,   182,     3,   151,    86,
      87,     4,    54,     5,   122,   -96,    19,    20,    58,    22,
      23,    55,   187,   188,     6,     7,     8,    91,     9,   135,
      25,   100,    10,    11,    12,    13,   210,   211,    14,    15,
      26,    27,   215,   216,    16,    17,    18,    19,    20,    21,
      22,    23,     3,   231,   232,   221,     4,   160,    24,   162,
     136,    25,    19,    20,    58,    22,    23,   227,   137,     6,
     138,    26,    27,     9,    61,    63,    25,   151,   239,   140,
     240,     3,   139,    14,    15,     4,    26,    27,   144,    16,
     145,    82,    83,    55,    89,   147,   239,   155,     6,   250,
     148,   156,     9,    90,   255,   157,    10,    82,    83,   239,
     158,   161,    14,    15,    19,    20,    60,   163,    16,   169,
      18,    19,    20,    21,    22,    23,     3,    19,    20,    62,
       4,   177,    24,   183,   213,    25,    75,    76,    77,    78,
     189,   190,    79,     6,   195,    26,    27,     9,   111,    73,
     112,    10,    80,    81,   191,    82,    83,    14,    15,   164,
     165,   166,   192,    16,   194,    18,    19,    20,    21,    22,
      23,     3,   198,   199,   203,     4,   205,    24,   208,   229,
      25,   123,   124,   212,   126,   127,   128,   219,     6,   217,
      26,    27,     9,   218,   220,   110,    10,   111,    73,   112,
     222,   224,    14,    15,   228,   233,   237,   241,    16,   242,
      18,    19,    20,    21,    22,    23,     3,   251,   244,   247,
       4,   249,    24,   252,   234,    25,   256,   257,   258,   260,
     264,   261,    30,     6,   103,    26,    27,     9,   263,   184,
       0,    10,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,     0,    16,     0,    18,    19,    20,    21,    22,
      23,     3,     0,     0,     0,     4,     0,    24,     0,   245,
      25,     0,     0,     0,     0,     0,     0,     0,     6,     0,
      26,    27,     9,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,    16,     0,
      18,    19,    20,    21,    22,    23,     0,     8,     0,     0,
       0,     0,    24,    10,     0,    25,     0,     0,     0,    19,
      20,    58,    22,    23,     0,    26,    27,    18,    19,    20,
      21,    22,    23,    25,   104,     8,     0,     0,     0,    24,
     225,    10,    25,    26,    27,     3,     0,     0,     0,     4,
       0,     0,    26,    27,     0,    18,    19,    20,    21,    22,
      23,     0,     6,     0,     0,     0,     9,    24,   253,     0,
      25,     0,     0,     0,    10,     0,    14,    15,     0,     0,
      26,    27,    16,     0,     0,     0,     0,    89,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      24,   141,    10,    25,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    26,    27,     0,    18,    19,    20,    21,
      22,    23,    18,    19,    20,    21,    22,    23,    24,   171,
       0,    25,     0,     0,    24,   175,    10,    25,     0,     0,
       3,    26,    27,     0,     4,     0,     0,    26,    27,     0,
      18,    19,    20,    21,    22,    23,     0,     6,     0,     0,
       0,     9,    24,   181,     0,    25,    11,    12,    13,     0,
       0,    14,    15,     0,     0,    26,    27,    16,    19,    20,
      58,    22,    23,    19,    20,    58,    22,    23,     0,   133,
       0,     0,    25,     0,   173,     0,     0,    25,     0,     0,
       0,     0,    26,    27,     0,     0,     0,    26,    27
};

static const yytype_int16 yycheck[] =
{
       1,     1,    49,     1,   133,     1,   148,    37,    47,   135,
      45,    50,   171,    57,    14,    43,   175,   205,    45,   178,
     179,   169,   181,    43,    25,   173,    61,    59,    63,   188,
      45,    31,   237,    57,    62,    67,    68,   163,    57,     3,
     169,    57,    62,     7,   173,   250,    47,    48,    57,    50,
      46,    90,   211,    54,   242,   203,    20,   216,    45,    89,
      24,    45,    54,     3,   111,    55,   225,     7,    67,    68,
     117,    35,    73,   232,   203,   217,    40,    61,    45,    63,
      20,    59,     3,    84,    24,    45,     7,    58,    88,    90,
      46,    47,    88,    45,   253,    35,    67,    68,   137,    20,
      40,    57,   100,    24,    48,    49,    50,    51,   155,    45,
     110,    46,    47,    54,    35,    54,    46,    47,    58,    40,
      64,    65,    60,    67,    68,    60,    67,    68,    54,   129,
      60,   131,    54,   129,   164,   131,   137,    58,   136,   135,
     138,    46,    47,    63,     0,   146,   144,     3,   148,    69,
      70,     7,    57,     9,    54,    60,    43,    44,    45,    46,
      47,    66,    54,    55,    20,    21,    22,   163,    24,    59,
      57,    58,    28,    29,    30,    31,    54,    55,    34,    35,
      67,    68,    54,    55,    40,    41,    42,    43,    44,    45,
      46,    47,     3,    54,    55,   195,     7,   129,    54,   131,
      58,    57,    43,    44,    45,    46,    47,   205,    54,    20,
      58,    67,    68,    24,    26,    27,    57,   217,   219,    54,
     220,     3,    58,    34,    35,     7,    67,    68,    58,    40,
      58,    67,    68,    66,    45,    58,   237,    59,    20,    59,
      57,    62,    24,    54,   242,    45,    28,    67,    68,   250,
      60,    56,    34,    35,    43,    44,    45,    59,    40,    54,
      42,    43,    44,    45,    46,    47,     3,    43,    44,    45,
       7,    54,    54,    54,    56,    57,    48,    49,    50,    51,
      58,    45,    54,    20,    27,    67,    68,    24,    59,    60,
      61,    28,    64,    65,    62,    67,    68,    34,    35,    45,
      46,    47,    60,    40,    60,    42,    43,    44,    45,    46,
      47,     3,    45,    45,    54,     7,    15,    54,    56,    56,
      57,    82,    83,    58,    85,    86,    87,    55,    20,    59,
      67,    68,    24,    60,    27,    57,    28,    59,    60,    61,
      56,    56,    34,    35,    56,    56,    55,    61,    40,    15,
      42,    43,    44,    45,    46,    47,     3,    61,    56,    56,
       7,    56,    54,    43,    56,    57,    56,    56,    56,    43,
      56,    62,     1,    20,    51,    67,    68,    24,    62,   146,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,     3,    -1,    -1,    -1,     7,    -1,    54,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      67,    68,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    22,    -1,    -1,
      -1,    -1,    54,    28,    -1,    57,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    67,    68,    42,    43,    44,
      45,    46,    47,    57,    58,    22,    -1,    -1,    -1,    54,
      55,    28,    57,    67,    68,     3,    -1,    -1,    -1,     7,
      -1,    -1,    67,    68,    -1,    42,    43,    44,    45,    46,
      47,    -1,    20,    -1,    -1,    -1,    24,    54,    55,    -1,
      57,    -1,    -1,    -1,    28,    -1,    34,    35,    -1,    -1,
      67,    68,    40,    -1,    -1,    -1,    -1,    45,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    28,    57,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    67,    68,    -1,    42,    43,    44,    45,
      46,    47,    42,    43,    44,    45,    46,    47,    54,    55,
      -1,    57,    -1,    -1,    54,    55,    28,    57,    -1,    -1,
       3,    67,    68,    -1,     7,    -1,    -1,    67,    68,    -1,
      42,    43,    44,    45,    46,    47,    -1,    20,    -1,    -1,
      -1,    24,    54,    55,    -1,    57,    29,    30,    31,    -1,
      -1,    34,    35,    -1,    -1,    67,    68,    40,    43,    44,
      45,    46,    47,    43,    44,    45,    46,    47,    -1,    54,
      -1,    -1,    57,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,     0,     3,     7,     9,    20,    21,    22,    24,
      28,    29,    30,    31,    34,    35,    40,    41,    42,    43,
      44,    45,    46,    47,    54,    57,    67,    68,    73,    74,
      76,    78,    82,    83,    85,    89,    90,    91,    93,    94,
      95,    96,    97,    98,   100,    45,    57,    57,    57,    89,
      57,    57,    46,    47,    57,    66,    45,    45,    45,    93,
      45,    98,    45,    98,    89,    54,    45,    61,    63,    80,
      92,    46,    47,    60,    79,    48,    49,    50,    51,    54,
      64,    65,    67,    68,    84,    63,    69,    70,    55,    45,
      54,    73,    86,    87,    89,    83,    93,    93,    45,    92,
      58,    83,    45,    91,    58,    93,   101,    45,    58,    45,
      57,    59,    61,    79,    43,    62,    45,    59,    54,    54,
      54,    93,    54,    94,    94,    93,    94,    94,    94,    73,
      75,    76,    79,    54,    83,    59,    58,    54,    58,    58,
      54,    55,    90,    93,    58,    58,    59,    58,    57,    58,
      77,    89,    92,    43,    62,    59,    62,    45,    60,    92,
      75,    56,    75,    59,    45,    46,    47,    88,    97,    54,
      87,    55,    90,    54,    83,    55,    90,    54,    73,    90,
      99,    55,    90,    54,   101,    58,    77,    54,    55,    58,
      45,    62,    60,    92,    60,    27,    87,    79,    45,    45,
      88,    99,    88,    54,    99,    15,    99,    99,    56,    99,
      54,    55,    58,    56,    99,    54,    55,    59,    60,    55,
      27,    89,    56,    88,    56,    55,    82,    90,    56,    56,
      99,    54,    55,    56,    56,    99,    77,    55,    81,    93,
      89,    61,    15,    99,    56,    56,    99,    56,    81,    56,
      59,    61,    43,    55,    82,    90,    56,    56,    56,    81,
      43,    62,    99,    62,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     3,     2,     0,
       3,     4,     5,     1,     1,     2,     2,     8,     9,     7,
       8,     7,     8,     6,     7,     6,     5,     7,     6,     2,
       4,     1,     1,     1,     2,     3,     4,     2,     3,     9,
       8,     8,     7,     1,     3,     5,     7,     7,     9,     9,
      11,     7,     9,     1,     3,     1,     1,     1,     1,     1,
       1,     5,     7,     4,     6,     5,     7,     5,     4,     4,
       4,     3,     3,     3,     2,     1,     2,     3,     4,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     5,     3,     3,     2,     1,     1,     3,     1,     2,
       4,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     3,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 18 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 19 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 20 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 21 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 22 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 23 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[-1].s)); }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 24 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 25 "test.y" /* yacc.c:1646  */
    { /*empty*/ }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 27 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
			}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 31 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"static %s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
			}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 36 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s %s {\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 41 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 44 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 47 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 56 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 61 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s){\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 66 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(){\n%s\n}",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
			}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s){ }",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
			}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(){ }",(yyvsp[-5].s),(yyvsp[-4].s));
			}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s));
			}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 100 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s) ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
			}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s() ;",(yyvsp[-4].s),(yyvsp[-3].s));
			}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s) ;",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
			}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s() ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s));
			}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 121 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 126 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 127 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 128 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 130 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"= %s",(yyvsp[0].s));
				}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 135 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[] %s",(yyvsp[0].s));
				}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 143 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"* %s",(yyvsp[0].s));
				}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 147 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[%d]",(yyvsp[-1].i));
				}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 151 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[] %s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"*%s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 159 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf((yyval.s),"%s[%d] = {%s}",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s));
				}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 163 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf((yyval.s),"%s[] = {%s}",(yyvsp[-6].s),(yyvsp[-1].s));
				}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 168 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 169 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s,%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 174 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s)); 
				}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 178 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s {\n%s\n}",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 190 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 194 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s {\n%s\n}",(yyvsp[-10].s),(yyvsp[-8].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 198 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 202 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);/*not full implement yet*/ }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 213 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 214 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 215 "test.y" /* yacc.c:1646  */
    { (yyval.s) = "<"; }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 216 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ">"; }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 217 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 218 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 228 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) %s ;",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 232 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) {\n%s\n}",(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 236 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s ;",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ; %s ;",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 249 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; %s ;",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 253 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; ; %s ",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 257 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s  ;",(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 261 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; %s ",(yyvsp[0].s));
			}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 265 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; ",(yyvsp[-1].s));
			}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 269 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," %s ; ;",(yyvsp[-2].s));
			}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 273 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; ");
			}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 278 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 279 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 280 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s , %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 284 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s %s , %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 289 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 290 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 294 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 298 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 303 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 303 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 303 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 303 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 303 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 305 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 313 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 317 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 321 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 325 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 329 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ";"; }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 331 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 332 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s.%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 337 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 338 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 342 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 346 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 350 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 351 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 357 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 358 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s + %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 362 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s - %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 367 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 368 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s * %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 372 "test.y" /* yacc.c:1646  */
    {
					/*zero divisor*/
					if((yyvsp[0].s)[0]=='0') fprintf(stderr,"zero divisor\n");
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s / %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 378 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s \% %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 383 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 384 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 385 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"(%s)",(yyvsp[-1].s));
				}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 389 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 392 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s); printf("debug\n");
				}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 395 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 397 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"++%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 405 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"--%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 413 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"+%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 421 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 429 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 433 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 438 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s++",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 446 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s--",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 456 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%d",(yyvsp[0].i)); 
				}
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 460 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%g",(yyvsp[0].d));
				}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 465 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s",(yyvsp[0].s));
				}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 469 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 470 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 474 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 479 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s()",(yyvsp[-2].s));
				}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 483 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s(%s)",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 488 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 489 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2694 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 494 "test.y" /* yacc.c:1906  */

int main(){
	yyparse();
	return 0;
}
