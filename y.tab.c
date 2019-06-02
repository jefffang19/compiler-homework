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
#define IDLISTSIZE 100
#define IDLEN 100
#define STACKSIZE 50
struct st_func{
	int size;
	char scope_name[IDLEN];
	char idlist[IDLISTSIZE][IDLEN];
};
typedef struct st_func ST;

struct mystack{
	int size;
	ST list[STACKSIZE];
}table;
typedef struct mystack STACK;

void into_scope(char str[]);
void add_id(char str[]);
void out_scope();
void print_current();
int check_sameid(char str[]);

int sem_def;

#line 95 "y.tab.c" /* yacc.c:339  */

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
#line 29 "test.y" /* yacc.c:355  */

	char* s;
	char c;
	float d;
	int i;

#line 248 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   658

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

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
       2,     2,     2,    69,     2,     2,     2,    68,     2,     2,
      56,    57,    61,    65,    58,    66,    64,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
      62,    55,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,    71,     2,     2,     2,     2,
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
       0,    43,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    53,    57,    61,    66,    75,    82,    86,    89,    93,
      98,   107,   116,   125,   134,   144,   154,   164,   174,   182,
     190,   198,   207,   211,   215,   219,   224,   225,   226,   228,
     233,   241,   249,   257,   261,   269,   277,   285,   294,   295,
     300,   304,   308,   312,   316,   320,   324,   328,   333,   334,
     339,   340,   341,   342,   343,   344,   346,   350,   354,   358,
     362,   366,   371,   375,   379,   383,   387,   391,   395,   399,
     404,   405,   406,   410,   415,   416,   420,   424,   429,   429,
     429,   429,   429,   429,   431,   435,   439,   443,   447,   451,
     455,   457,   458,   462,   466,   470,   475,   486,   494,   502,
     510,   511,   517,   518,   522,   527,   528,   532,   538,   543,
     544,   548,   549,   550,   554,   557,   560,   562,   570,   578,
     586,   594,   598,   603,   611,   621,   625,   630,   634,   635,
     636,   640,   644,   648,   653,   657,   662,   663,   668,   672,
     676,   678,   682
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
  "';'", "'='", "'('", "')'", "','", "'['", "']'", "'*'", "'<'", "'>'",
  "'.'", "'+'", "'-'", "'/'", "'%'", "'!'", "'{'", "'}'", "$accept",
  "readin", "declaration", "class_declr", "new_obj", "class_body",
  "method_declr", "method_declr_parem", "method_modifier", "assign",
  "arrinit", "arrinit_expr", "conditional", "boolean_expr", "infixop",
  "loop", "for_parem", "forinitop", "forupdate", "type", "simple", "name",
  "identifier_list", "expr", "term", "factor", "prefixOp", "postfixOp",
  "const_expr", "compound", "function", "func_parem", "func_return",
  "leftcurly", "rightcurly", YY_NULLPTR
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
     305,   306,   307,   308,    59,    61,    40,    41,    44,    91,
      93,    42,    60,    62,    46,    43,    45,    47,    37,    33,
     123,   125
};
# endif

#define YYPACT_NINF -264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-264)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -264,   281,  -264,  -264,  -264,   -21,    15,  -264,   -28,   -11,
    -264,    -7,  -264,  -264,  -264,    15,    -2,  -264,    41,    52,
    -264,  -264,    32,    22,    74,  -264,   248,   216,   263,    80,
      86,  -264,  -264,  -264,    15,  -264,    91,  -264,    42,  -264,
     111,   585,  -264,   143,  -264,  -264,  -264,  -264,    58,  -264,
      65,   431,   248,   248,    65,   526,    80,    93,  -264,  -264,
      -9,    90,  -264,  -264,  -264,    53,    94,    81,  -264,  -264,
    -264,  -264,   -17,  -264,  -264,   106,  -264,   210,   -29,   117,
     110,  -264,   109,   118,   248,   531,   119,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,   248,   248,   248,   248,   248,   248,
    -264,   525,   136,  -264,   125,   558,   127,   132,   161,    65,
     159,   592,   122,  -264,   464,   164,   167,   199,   169,   179,
      94,   174,  -264,  -264,   171,    87,    65,   -16,   184,   185,
     202,   212,    65,  -264,  -264,    23,  -264,   135,   197,  -264,
    -264,  -264,    23,  -264,  -264,  -264,   203,   206,   525,   215,
     273,   220,   518,   464,   563,   464,   226,  -264,    76,   381,
     464,   228,   225,  -264,  -264,  -264,   162,    10,   229,   242,
    -264,   236,   234,    65,  -264,   245,   270,  -264,   248,  -264,
     525,  -264,  -264,  -264,   518,   128,   284,   285,  -264,  -264,
     273,  -264,  -264,   381,   273,   277,   317,   381,  -264,   248,
     279,   381,   381,   206,   282,  -264,   381,  -264,   283,    16,
     286,  -264,   331,    64,    11,   287,    58,  -264,   313,    15,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,   206,  -264,   273,
     435,   206,  -264,   592,   381,  -264,  -264,  -264,  -264,   206,
     288,  -264,   331,    67,   206,  -264,  -264,   331,    15,   290,
      58,   248,    15,   293,  -264,  -264,  -264,  -264,   381,   326,
    -264,  -264,  -264,   206,  -264,  -264,   331,  -264,   206,  -264,
    -264,    15,   248,   206,   148,   295,   301,   206,   435,  -264,
     206,  -264,  -264,  -264,   206,  -264,   248,   314,   296,  -264,
    -264,  -264,   381,  -264,  -264,  -264,   298,  -264,   206,  -264,
    -264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,     1,    88,    89,     0,     0,    91,     0,     0,
      90,     0,    36,    37,    38,     0,   122,    93,     0,     0,
     135,   136,   101,     0,     0,   100,     0,     0,     0,     0,
       0,     4,     5,     3,     0,     7,     0,     9,     0,     6,
     119,     0,   112,   115,   124,   125,   121,   126,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
       0,     0,   127,   128,   122,   101,   119,     0,   129,   131,
     130,   132,   101,   120,     2,     0,     8,   106,     0,     0,
     110,    11,     0,     0,     0,     0,     0,    64,    65,    60,
      61,    99,    62,    63,     0,     0,     0,     0,     0,     0,
     151,     0,   106,    13,     0,     0,    80,     0,     0,     0,
       0,    58,     0,    12,     0,     0,     0,     0,     0,   101,
       0,     0,   102,   123,     0,     0,     0,     0,   107,     0,
       0,    42,     0,    97,    98,    39,   144,   146,     0,    94,
     113,   114,    59,   116,   117,   118,     0,     0,    17,    81,
      79,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,     0,
     109,     0,     0,     0,    43,    40,     0,   111,     0,   145,
      16,   152,    14,    19,     0,     0,     0,     0,    76,    84,
      77,    82,    70,     0,    78,     0,    50,     0,    95,   150,
       0,   139,   138,     0,     0,    66,     0,    96,     0,     0,
       0,    29,     0,     0,    32,    41,     0,   108,     0,     0,
     147,    18,    83,    87,    85,    86,    73,     0,    74,    75,
       0,     0,   149,    58,   137,   142,   141,    69,   143,     0,
       0,    31,     0,     0,     0,    26,    28,     0,     0,    34,
       0,     0,     0,     0,    71,    72,    56,    52,     0,    51,
     140,    67,    15,     0,    27,    30,     0,    22,     0,    24,
      33,     0,     0,     0,    48,     0,     0,     0,     0,    23,
       0,    25,    20,    35,     0,    47,     0,     0,     0,    53,
      57,    54,     0,    21,    46,    49,     0,    45,     0,    44,
      55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,    12,  -264,  -264,  -140,   359,  -155,  -264,   -36,
    -264,  -263,     0,   -40,  -264,  -264,  -264,  -126,  -173,     4,
       1,   -23,   -34,    -1,   138,  -264,  -264,  -109,   105,     6,
     302,   183,  -264,  -107,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   200,    31,    32,   147,   148,   168,    34,   128,
      80,   273,   201,    36,    96,    37,   107,   108,   188,   109,
     202,    40,    81,   158,    42,    43,    44,    45,    46,   203,
      47,   138,   204,   101,   182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    35,    39,    66,    86,    38,    73,   159,   183,   284,
      50,   210,   110,    30,   129,   115,   103,   226,     3,    54,
     113,   228,     4,   295,    48,    67,   191,   171,    51,    66,
      66,   130,    66,   116,   118,     7,   119,   120,    75,    10,
     221,   189,    60,   -92,   172,    52,   193,    61,   197,    53,
      49,   111,   112,   206,   111,    17,   255,   -92,   222,   -92,
     212,    66,    66,   106,   211,   151,    84,    62,   149,   248,
     241,    66,    66,    66,    66,    66,    66,    57,    58,    59,
     100,   189,    66,   135,   137,   189,   100,    77,    94,    95,
       3,    60,   170,   270,     4,   142,    61,    55,   177,    58,
      59,    78,   242,    79,   111,    38,   247,     7,    56,   251,
     102,    10,    60,   146,   195,   157,   283,    61,   246,    63,
     189,   265,    49,   258,    78,    72,    79,    17,   100,   169,
      91,    66,    69,    71,   100,   122,   266,   100,   123,   217,
      74,    94,    95,   272,   167,    76,    94,    95,   117,   223,
      85,   124,    38,   111,   192,    66,   196,    82,    83,   232,
     146,   205,   131,   133,   106,     3,    84,    85,   132,     4,
     169,   292,   134,   139,    58,    59,    66,   137,   249,   156,
      84,   237,     7,    84,    38,   152,    10,    94,    95,   153,
     245,    84,   146,   178,   126,   127,   106,    49,   233,   227,
      94,    95,    17,   231,    97,   254,   286,   235,   236,   259,
      98,    99,   239,    94,    95,   154,   155,   261,   244,   209,
     264,   160,   267,   253,   161,   269,   162,   166,    66,   163,
     256,   257,   140,   141,   165,   143,   144,   145,    60,   164,
     260,   279,   173,    61,   281,   174,   282,   175,   263,    66,
     274,   285,   169,   268,   179,   289,   275,   180,   293,    20,
      21,    68,   294,    66,   277,    84,   125,   176,   126,   127,
     208,   274,   280,   184,   190,   169,   300,   181,   290,   291,
     198,     2,   207,    64,     3,   274,   213,   214,     4,   216,
       5,    20,    21,    65,    23,    24,   215,   219,   298,     6,
     218,     7,     8,     9,    26,    10,    20,    21,    70,    11,
      12,    13,    14,    27,    28,    15,    16,    29,   185,   186,
     187,    17,    18,    19,    20,    21,    22,    23,    24,   224,
     225,   229,   230,   234,     3,    25,   238,    26,     4,   240,
     252,   278,   250,   243,   288,   262,    27,    28,   271,     6,
      29,     7,   276,     9,   287,    10,   297,   296,   299,    11,
      33,   220,   121,   199,     0,    15,    16,     0,     0,     0,
       0,    17,     0,    19,    20,    21,    65,    23,    24,     0,
       0,     0,     0,     0,     3,    25,     0,    26,     4,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     6,
      29,     7,   181,     9,     0,    10,     0,     0,     0,    11,
       0,     0,     0,   199,     0,    15,    16,     0,     0,     0,
       0,    17,     0,    19,    20,    21,    65,    23,    24,     0,
       0,     0,     0,     0,     3,    25,     0,    26,     4,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     6,
      29,     7,     0,     0,     0,    10,     0,     9,     0,     0,
       0,     0,     0,    11,     0,    15,    49,     0,     0,     0,
      64,    17,     0,     0,     0,     0,   104,    19,    20,    21,
      65,    23,    24,     0,     0,   105,     0,     0,     0,    25,
       0,    26,    11,     0,     0,     0,     0,     0,     0,    64,
      27,    28,     0,     0,    29,   100,    19,    20,    21,    65,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,     3,     0,     0,     0,     4,     0,     0,     3,    27,
      28,     0,     4,    29,   100,     0,     6,     0,     7,     0,
       0,     0,    10,     6,     0,     7,     0,     0,     0,    10,
       0,     0,    15,    49,    12,    13,    14,     0,    17,    15,
      49,    64,     0,   104,     0,    17,    64,     0,     0,    20,
      21,    65,    23,    24,    20,    21,    65,    23,    24,     0,
       0,     0,    26,   114,     0,     0,     0,    26,   136,     0,
       0,    27,    28,    64,     0,    29,    27,    28,    64,     0,
      29,    20,    21,    65,    23,    24,    20,    21,    65,    23,
      24,     0,   150,     0,    26,     0,     0,   194,     0,    26,
       0,     0,     0,    27,    28,     0,     0,    29,    27,    28,
       0,     0,    29,    87,    88,    89,    90,     0,     0,    91,
      87,    88,    89,    90,     0,     0,     0,    92,    93,     0,
      94,    95,     0,     0,    92,    93,     0,    94,    95
};

static const yytype_int16 yycheck[] =
{
       1,     1,     1,    26,    40,     1,    29,   114,   148,   272,
       6,   166,    52,     1,    43,    55,    50,   190,     3,    15,
      54,   194,     7,   286,    45,    26,   152,    43,    56,    52,
      53,    60,    55,    56,    43,    20,    45,    60,    34,    24,
     180,   150,    59,    45,    60,    56,   153,    64,   155,    56,
      35,    52,    53,   160,    55,    40,   229,    59,   184,    61,
     167,    84,    85,    51,    54,   105,    55,    45,   104,    58,
      54,    94,    95,    96,    97,    98,    99,    45,    46,    47,
      70,   190,   105,    84,    85,   194,    70,    45,    65,    66,
       3,    59,   126,   248,     7,    96,    64,    56,   132,    46,
      47,    59,   209,    61,   105,   101,   213,    20,    56,   216,
      45,    24,    59,   101,   154,   114,   271,    64,    54,    45,
     229,    54,    35,   230,    59,    45,    61,    40,    70,   125,
      54,   154,    27,    28,    70,    45,   243,    70,    57,   173,
      54,    65,    66,   250,    57,    54,    65,    66,    55,   185,
      56,    45,   148,   154,   153,   178,   155,    46,    47,   199,
     148,   160,    45,    54,   152,     3,    55,    56,    58,     7,
     166,   278,    54,    54,    46,    47,   199,   178,   214,    57,
      55,   203,    20,    55,   180,    58,    24,    65,    66,    57,
     212,    55,   180,    58,    58,    59,   184,    35,   199,   193,
      65,    66,    40,   197,    61,   227,    58,   201,   202,   231,
      67,    68,   206,    65,    66,    54,    57,   239,   212,    57,
     242,    57,   244,   219,    57,   247,    27,    56,   251,    60,
     230,   230,    94,    95,    60,    97,    98,    99,    59,    60,
     234,   263,    58,    64,   266,    60,   268,    45,   242,   272,
     251,   273,   248,   247,    57,   277,   252,    54,   280,    43,
      44,    45,   284,   286,   258,    55,    56,    55,    58,    59,
      45,   272,   266,    58,    54,   271,   298,    71,   278,   278,
      54,     0,    54,    35,     3,   286,    57,    45,     7,    55,
       9,    43,    44,    45,    46,    47,    60,    27,   292,    18,
      55,    20,    21,    22,    56,    24,    43,    44,    45,    28,
      29,    30,    31,    65,    66,    34,    35,    69,    45,    46,
      47,    40,    41,    42,    43,    44,    45,    46,    47,    45,
      45,    54,    15,    54,     3,    54,    54,    56,     7,    56,
      27,    15,    55,    57,    43,    57,    65,    66,    58,    18,
      69,    20,    59,    22,    59,    24,    60,    43,    60,    28,
       1,   178,    60,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,     3,    54,    -1,    56,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    18,
      69,    20,    71,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,     3,    54,    -1,    56,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    18,
      69,    20,    -1,    -1,    -1,    24,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    34,    35,    -1,    -1,    -1,
      35,    40,    -1,    -1,    -1,    -1,    45,    42,    43,    44,
      45,    46,    47,    -1,    -1,    54,    -1,    -1,    -1,    54,
      -1,    56,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      65,    66,    -1,    -1,    69,    70,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      56,     3,    -1,    -1,    -1,     7,    -1,    -1,     3,    65,
      66,    -1,     7,    69,    70,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    34,    35,    29,    30,    31,    -1,    40,    34,
      35,    35,    -1,    45,    -1,    40,    35,    -1,    -1,    43,
      44,    45,    46,    47,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    56,    57,    -1,
      -1,    65,    66,    35,    -1,    69,    65,    66,    35,    -1,
      69,    43,    44,    45,    46,    47,    43,    44,    45,    46,
      47,    -1,    54,    -1,    56,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    65,    66,    -1,    -1,    69,    65,    66,
      -1,    -1,    69,    48,    49,    50,    51,    -1,    -1,    54,
      48,    49,    50,    51,    -1,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    62,    63,    -1,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,     0,     3,     7,     9,    18,    20,    21,    22,
      24,    28,    29,    30,    31,    34,    35,    40,    41,    42,
      43,    44,    45,    46,    47,    54,    56,    65,    66,    69,
      74,    75,    76,    78,    80,    84,    85,    87,    91,    92,
      93,    95,    96,    97,    98,    99,   100,   102,    45,    35,
      91,    56,    56,    56,    91,    56,    56,    45,    46,    47,
      59,    64,    45,    45,    35,    45,    93,    95,    45,   100,
      45,   100,    45,    93,    54,    91,    54,    45,    59,    61,
      82,    94,    46,    47,    55,    56,    81,    48,    49,    50,
      51,    54,    62,    63,    65,    66,    86,    61,    67,    68,
      70,   105,    45,    94,    45,    54,    74,    88,    89,    91,
      85,    95,    95,    94,    57,    85,    93,    55,    43,    45,
      93,   102,    45,    57,    45,    56,    58,    59,    81,    43,
      60,    45,    58,    54,    54,    95,    57,    95,   103,    54,
      96,    96,    95,    96,    96,    96,    74,    77,    78,    81,
      54,    85,    58,    57,    54,    57,    57,    92,    95,   105,
      57,    57,    27,    60,    60,    60,    56,    57,    79,    91,
      94,    43,    60,    58,    60,    45,    55,    94,    58,    57,
      54,    71,   106,    77,    58,    45,    46,    47,    90,    99,
      54,    89,    92,   105,    54,    85,    92,   105,    54,    32,
      74,    84,    92,   101,   104,    92,   105,    54,    45,    57,
      79,    54,   105,    57,    45,    60,    55,    94,    55,    27,
     103,    77,    89,    81,    45,    45,    90,   101,    90,    54,
      15,   101,    85,    95,    54,   101,   101,   106,    54,   101,
      56,    54,   105,    57,   101,   106,    54,   105,    58,    81,
      55,   105,    27,    91,   106,    90,    84,    92,   105,   106,
     101,   106,    57,   101,   106,    54,   105,   106,   101,   106,
      79,    58,   105,    83,    95,    91,    59,   101,    15,   106,
     101,   106,   106,    79,    83,   106,    58,    59,    43,   106,
      84,    92,   105,   106,   106,    83,    43,    60,   101,    60,
     106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    74,    75,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     2,     3,     2,
       0,     2,     3,     3,     5,     7,     2,     1,     3,     2,
       8,     9,     7,     8,     7,     8,     6,     7,     6,     5,
       7,     6,     2,     4,     3,     5,     1,     1,     1,     2,
       3,     4,     2,     3,     9,     8,     8,     7,     1,     3,
       5,     7,     7,     9,     9,    11,     7,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     5,     7,     4,     6,
       5,     7,     5,     4,     4,     4,     3,     3,     3,     2,
       1,     2,     3,     4,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     3,     5,     5,     3,     3,     2,
       1,     1,     3,     4,     4,     4,     1,     2,     4,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     1,     1,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     2,     1,     1,
       3,     2,     2,     2,     3,     4,     1,     3,     2,     2,
       1,     1,     1
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
#line 43 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[-1].s)); }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[0].s)); }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 49 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[-1].s)); }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "test.y" /* yacc.c:1646  */
    { /*empty*/ }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"static %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"final %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s {\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s),(yyvsp[-1].s));
				else{ 
					add_id((yyvsp[-3].s));
					sprintf((yyval.s),"%s %s {\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
			}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "test.y" /* yacc.c:1646  */
    {
				/* check if class difined? */
				if(strcmp((yyvsp[-6].s),(yyvsp[-2].s))!=0) fprintf(stderr,"%s typed do not match with newed type %s",(yyvsp[-5].s),(yyvsp[-2].s));
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s %s = new %s()",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-2].s));
			}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
			}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s ;\n%s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s(%s){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s %s(%s){\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sem_def = 1;
				else{
					add_id((yyvsp[-5].s));
					sprintf((yyval.s),"%s %s(){\n%s\n}",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
				}
			}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 125 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s %s(){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-5].s),(yyvsp[-1].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s(%s){ }\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-5].s));
				else{ 
					sprintf((yyval.s),"%s %s(%s){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 144 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s %s(%s){ }\n>'%s' is a duplicate identifier",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-5].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(%s){ }",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s(){ }\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s(){ }",(yyvsp[-5].s),(yyvsp[-4].s));
					add_id((yyvsp[-4].s));
				}
			}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 164 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s %s(){ }\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s));
 					add_id((yyvsp[-4].s));
 				}
			}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
				else{ 
					sprintf((yyval.s),"%s %s(%s) ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
					add_id((yyvsp[-4].s));
				}
			}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s() ;",(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 190 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(%s) ;",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
 					add_id((yyvsp[-4].s));
 				}
			}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 198 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s %s() ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 207 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 211 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 215 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 219 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s, %s",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 224 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 225 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 228 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"= %s",(yyvsp[0].s));
				}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 233 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"[] %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"[] %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);		
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 249 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"* %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"* %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 257 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[%d]",(yyvsp[-1].i));
				}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 261 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"[] %s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"[] %s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 269 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"*%s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"*%s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 277 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-7].s))) sprintf((yyval.s),"%s[%d] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s),(yyvsp[-7].s));
					else{ 
						sprintf((yyval.s),"%s[%d] = {%s}",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s));
						add_id((yyvsp[-7].s));
					}
				}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 285 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s[] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-1].s),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"%s[] = {%s}",(yyvsp[-6].s),(yyvsp[-1].s));
						 add_id((yyvsp[-6].s));
					}
				}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 294 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 295 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s,%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 300 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s)); 
				}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 304 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 308 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 312 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s {\n%s\n}",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 316 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 320 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s {\n%s\n}",(yyvsp[-10].s),(yyvsp[-8].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 324 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 333 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 334 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 340 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 341 "test.y" /* yacc.c:1646  */
    { (yyval.s) = "<"; }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 342 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ">"; }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 343 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 344 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 346 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 350 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 354 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) %s ;",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 358 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) {\n%s\n}",(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 362 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s ;",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 366 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 371 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ; %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 375 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 379 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; ; %s",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 383 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ;",(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 387 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; %s ",(yyvsp[0].s));
			}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 391 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; ",(yyvsp[-1].s));
			}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 395 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," %s ; ;",(yyvsp[-2].s));
			}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 399 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; ");
			}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 404 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 405 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 406 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s , %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 410 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s %s , %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 415 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 416 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 420 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 424 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 429 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 429 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 429 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); }
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 429 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 429 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 429 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 431 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 435 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 439 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 443 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 447 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 451 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 455 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ";"; }
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 457 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 458 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s.%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 462 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 466 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 470 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 475 "test.y" /* yacc.c:1646  */
    {	
					if(check_sameid((yyvsp[0].s))){
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					}
					else{ 
 						add_id((yyvsp[0].s));
 						(yyval.s) = (yyvsp[0].s);
 					}
					
				}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 486 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-1].s))) sprintf((yyval.s),"%s %s\n>'%s' is a duplicate identifier",(yyvsp[-1].s),(yyvsp[0].s),(yyvsp[-1].s));
					else{ 
						add_id((yyvsp[-1].s));
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
				}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 494 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s, %s\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 502 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-2].s))) sprintf((yyval.s),"%s, %s\n>'%s' is a duplicate identifier",(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-2].s));
					else{ 
						sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-2].s));
 					}
				}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 510 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 511 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 517 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 518 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s + %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 522 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s - %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 527 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 528 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s * %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 532 "test.y" /* yacc.c:1646  */
    {
					/*zero divisor*/
					if((yyvsp[0].s)[0]=='0') fprintf(stderr,"zero divisor\n");
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s / %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 538 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s \% %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 543 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 544 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"!%s",(yyvsp[0].s));
				}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 548 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 549 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 550 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"(%s)",(yyvsp[-1].s));
				}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 554 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 557 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);;
				}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 560 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 562 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"++%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 570 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"--%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 578 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"+%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 586 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 594 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 598 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 603 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s++",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 611 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s--",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 621 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%d",(yyvsp[0].i)); 
				}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 625 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%g",(yyvsp[0].d));
				}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 630 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 634 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 635 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 636 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 640 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 644 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 648 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 653 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s()",(yyvsp[-2].s));
				}
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 657 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s(%s)",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 662 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 663 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 668 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 672 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 676 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 678 "test.y" /* yacc.c:1646  */
    {
					into_scope("scope");
					(yyval.c) = '{';
				}
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 682 "test.y" /* yacc.c:1646  */
    {
					/*print_current();*/
					out_scope();				
					(yyval.c) = '}';
				}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2995 "y.tab.c" /* yacc.c:1646  */
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
#line 687 "test.y" /* yacc.c:1906  */

int main(){
	table.size = 0;
	into_scope("global");
	yyparse();
	/*print_current();*/
	return 0;
}

void into_scope(char str[]){
	table.size++;
	table.list[table.size-1].size=0;
	strcpy(table.list[table.size-1].scope_name,str);
}

void add_id(char str[]){
	table.list[table.size-1].size++;
	strcpy(table.list[table.size-1].idlist[table.list[table.size-1].size-1],str);
}

void out_scope(){
	table.list[table.size-1].size = 0;
	table.size--;
}

void print_current(){
	int cur_size = table.list[table.size-1].size, i;
	printf("scope: %s\nid list size: %d\n",table.list[table.size-1].scope_name,cur_size);
	for(i=0;i<cur_size;++i){
		printf("%s\n",table.list[table.size-1].idlist[i]);
	}
	printf("\n");
}

int check_sameid(char str[]){
	int cur_size = table.list[table.size-1].size, i;
	for(i=0;i<cur_size;++i){
		if(strcmp(table.list[table.size-1].idlist[i],str)==0) return 1;
	}
	return 0;
}
