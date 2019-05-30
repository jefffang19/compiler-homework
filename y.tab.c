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
#define YYLAST   459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

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
       2,     2,     2,     2,     2,     2,     2,    68,     2,     2,
      57,    58,    63,    65,    59,    66,    64,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,    60,     2,     2,     2,     2,     2,     2,     2,     2,
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
       0,    18,    18,    19,    20,    21,    22,    23,    25,    29,
      34,    39,    42,    45,    49,    54,    59,    64,    69,    74,
      80,    86,    92,    98,   102,   106,   110,   115,   119,   124,
     125,   126,   128,   133,   137,   141,   145,   149,   153,   157,
     161,   166,   167,   172,   176,   180,   184,   188,   192,   197,
     198,   198,   198,   198,   198,   198,   200,   204,   208,   212,
     216,   220,   224,   226,   227,   232,   233,   237,   241,   245,
     246,   252,   253,   257,   262,   263,   267,   273,   278,   279,
     280,   284,   287,   290,   292,   300,   308,   316,   324,   328,
     333,   341,   351,   355,   360,   364,   365,   369,   374,   378,
     383,   384
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
  "'.'", "'+'", "'-'", "'/'", "'%'", "$accept", "readin", "declaration",
  "class_declr", "class_body", "method_declr", "method_declr_parem",
  "method_modifier", "assign", "arrinit", "arrinit_expr", "conditional",
  "boolean_expr", "type", "simple", "name", "identifier_list", "expr",
  "term", "factor", "prefixOp", "postfixOp", "const_expr", "compound",
  "function", "func_parem", YY_NULLPTR
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
      61,    91,    93,    42,    46,    43,    45,    47,    37
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -166,   141,  -166,  -166,  -166,   -38,  -166,   -44,  -166,   -35,
    -166,  -166,  -166,   218,  -166,  -166,   -18,  -166,  -166,    26,
       0,    18,  -166,   393,    15,    84,  -166,  -166,  -166,   218,
    -166,   -28,  -166,    51,    49,  -166,   111,  -166,  -166,  -166,
    -166,   -51,   393,   393,    -8,    29,  -166,  -166,   388,    32,
    -166,  -166,    79,    36,  -166,  -166,  -166,  -166,    35,   155,
     -34,    37,   -10,    17,    30,    38,   393,    42,  -166,   393,
     393,   393,   393,   393,   170,    48,    90,    87,   159,    46,
      53,    72,  -166,   -25,    75,  -166,  -166,    78,     3,    -8,
     -31,    81,    85,   115,   104,    -8,  -166,  -166,  -166,    90,
    -166,  -166,  -166,  -166,  -166,  -166,   170,   110,   170,    77,
      83,  -166,   114,   393,  -166,    12,   148,   124,   144,  -166,
     129,   133,    -8,  -166,   137,   181,  -166,  -166,  -166,  -166,
      22,   196,  -166,  -166,  -166,   172,   164,  -166,   189,   205,
     169,   177,   175,  -166,   212,   218,    22,    -8,    22,   185,
     358,  -166,   237,   208,  -166,   200,  -166,   285,   218,   197,
     393,   218,   203,  -166,  -166,   253,    22,  -166,  -166,   213,
    -166,   333,  -166,  -166,   214,  -166,   393,   217,    92,   215,
     231,   364,   219,  -166,  -166,   222,  -166,   229,  -166,   393,
     243,   225,    22,  -166,  -166,  -166,  -166,  -166,   227,  -166,
     234,  -166,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     1,    50,    51,     0,    53,     0,    52,     0,
      29,    30,    31,     0,    54,    55,     0,    92,    93,    78,
       0,     0,    62,     0,     0,     0,     2,     4,     3,     0,
       6,     0,     5,     0,     0,    71,    74,    81,    82,    79,
      83,     0,     0,     0,     0,     0,    90,    91,     0,     0,
      84,    85,    78,     0,    86,    88,    87,    89,     0,    65,
       0,     0,    69,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,    49,     0,    65,     0,
      63,     0,    98,   100,     0,    64,    80,     0,     0,     0,
       0,    66,     0,     0,    35,     0,     8,    59,    60,    32,
      56,    72,    73,    75,    76,    77,    11,     0,    12,     0,
       0,     9,     0,     0,    99,     0,     0,     0,     0,    68,
       0,     0,     0,    36,    33,     0,    70,    13,    10,    14,
       0,    43,    57,    58,   101,     0,     0,    24,     0,     0,
      27,    34,     0,    67,     0,     0,    94,     0,    95,     0,
       0,    26,     0,     0,    21,     0,    23,     0,     0,     0,
       0,     0,     0,    96,    97,    44,     0,    45,    22,     0,
      25,     0,    17,    19,     0,    28,     0,     0,    41,     0,
       0,     0,     0,    18,    20,     0,    15,     0,    40,     0,
       0,     0,     0,    47,    46,    16,    39,    42,     0,    38,
       0,    37,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,     4,  -166,   -90,   294,  -107,  -166,   263,  -166,
    -165,  -166,  -166,     1,    -1,   252,   -41,   -22,   178,  -166,
    -166,  -166,   242,   -53,  -166,   186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   146,    27,   107,   108,   117,    29,    91,    62,
     177,    30,    75,   147,   148,    33,    63,    34,    35,    36,
      37,    38,    39,   149,    40,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    53,    31,    79,    74,    26,     3,    41,   136,    92,
       4,   187,   120,    42,    44,     3,   127,    59,   129,     4,
      76,    77,    43,     6,   197,     3,    83,     8,    93,     4,
      58,   121,     6,    60,   113,    61,     8,    78,    14,    45,
      69,    70,     6,    15,    99,    50,     8,    14,   119,    95,
       9,   175,    15,    60,   126,    61,    13,    14,    17,    18,
      54,   116,    15,    51,    16,    17,    18,    19,    20,    21,
     135,    96,    46,    47,    80,    31,    22,    85,   106,    23,
      87,   143,    94,    48,    97,   155,   -63,    24,    25,   118,
      49,    83,    98,   163,    86,   164,   100,    64,    65,   169,
     111,    69,    70,    68,   174,     9,   109,    31,   131,    31,
     106,    66,   106,   182,    69,    70,   118,    49,   185,    16,
      17,    18,    19,    20,    21,    46,    47,    17,    18,    56,
     112,    22,   130,   114,    23,   115,    48,   132,   178,   200,
     122,     2,    24,    25,     3,   110,   162,   123,     4,   167,
       5,   189,    69,    70,   178,    69,    70,    69,    70,   118,
     124,     6,   179,     7,   125,     8,   128,   178,   133,     9,
      10,    11,    12,     3,    71,    13,    14,     4,    72,    73,
     193,    15,   139,    16,    17,    18,    19,    20,    21,   140,
       6,   141,     3,   142,     8,    22,     4,   144,    23,    10,
      11,    12,   137,   138,    13,    14,    24,    25,   145,     6,
      15,   150,    88,     8,    89,    66,    90,     9,    89,    66,
      90,     3,   153,    13,    14,     4,   151,   152,   158,    15,
     160,    16,    17,    18,    19,    20,    21,   159,     6,   161,
       3,   165,     8,    22,     4,   154,    23,   101,   102,   103,
     104,   105,   176,    14,    24,    25,   172,     6,    15,   156,
     157,     8,   170,   171,   180,     9,    55,    57,   181,   183,
     186,    13,    14,   188,   191,   194,   190,    15,   195,    16,
      17,    18,    19,    20,    21,   196,   198,   199,     3,   201,
     202,    22,     4,   168,    23,    28,    67,    81,     0,   134,
       0,     0,    24,    25,     0,     6,     0,     0,     0,     8,
       0,     0,     0,     9,     0,     0,     0,     0,     0,    13,
      14,     0,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     3,     0,     0,    22,
       4,   173,    23,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,     6,     0,     0,     0,     8,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    13,    14,     0,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     9,    22,     0,   184,
      23,     0,     9,     0,     0,     0,     0,     0,    24,    25,
      16,    17,    18,    19,    20,    21,    16,    17,    18,    19,
      20,    21,    22,   166,     0,    23,     0,     0,    22,   192,
       0,    23,     0,    24,    25,     0,     0,     0,     0,    24,
      25,    17,    18,    52,    20,    21,    17,    18,    52,    20,
      21,     0,     0,     0,     0,    23,    82,     0,     0,     0,
      23,     0,     0,    24,    25,     0,     0,     0,    24,    25
};

static const yytype_int16 yycheck[] =
{
       1,    23,     1,    44,    55,     1,     3,    45,   115,    43,
       7,   176,    43,    57,    13,     3,   106,    45,   108,     7,
      42,    43,    57,    20,   189,     3,    48,    24,    62,     7,
      29,    62,    20,    61,    59,    63,    24,    45,    35,    57,
      65,    66,    20,    40,    66,    45,    24,    35,    89,    59,
      28,   158,    40,    61,    95,    63,    34,    35,    43,    44,
      45,    58,    40,    45,    42,    43,    44,    45,    46,    47,
      58,    54,    46,    47,    45,    74,    54,    45,    74,    57,
      45,   122,    45,    57,    54,   138,    60,    65,    66,    88,
      64,   113,    54,   146,    58,   148,    54,    46,    47,   152,
      54,    65,    66,    54,   157,    28,    58,   106,   109,   108,
     106,    60,   108,   166,    65,    66,   115,    64,   171,    42,
      43,    44,    45,    46,    47,    46,    47,    43,    44,    45,
      58,    54,    55,    58,    57,    57,    57,    54,   160,   192,
      59,     0,    65,    66,     3,    58,   145,    62,     7,   150,
       9,    59,    65,    66,   176,    65,    66,    65,    66,   158,
      45,    20,   161,    22,    60,    24,    56,   189,    54,    28,
      29,    30,    31,     3,    63,    34,    35,     7,    67,    68,
     181,    40,    58,    42,    43,    44,    45,    46,    47,    45,
      20,    62,     3,    60,    24,    54,     7,    60,    57,    29,
      30,    31,    54,    55,    34,    35,    65,    66,    27,    20,
      40,    15,    57,    24,    59,    60,    61,    28,    59,    60,
      61,     3,    58,    34,    35,     7,    54,    55,    59,    40,
      55,    42,    43,    44,    45,    46,    47,    60,    20,    27,
       3,    56,    24,    54,     7,    56,    57,    69,    70,    71,
      72,    73,    55,    35,    65,    66,    56,    20,    40,    54,
      55,    24,    54,    55,    61,    28,    24,    25,    15,    56,
      56,    34,    35,    56,    43,    56,    61,    40,    56,    42,
      43,    44,    45,    46,    47,    56,    43,    62,     3,    62,
      56,    54,     7,    56,    57,     1,    33,    45,    -1,   113,
      -1,    -1,    65,    66,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,     3,    -1,    -1,    54,
       7,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    28,    54,    -1,    56,
      57,    -1,    28,    -1,    -1,    -1,    -1,    -1,    65,    66,
      42,    43,    44,    45,    46,    47,    42,    43,    44,    45,
      46,    47,    54,    55,    -1,    57,    -1,    -1,    54,    55,
      -1,    57,    -1,    65,    66,    -1,    -1,    -1,    -1,    65,
      66,    43,    44,    45,    46,    47,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      57,    -1,    -1,    65,    66,    -1,    -1,    -1,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,     0,     3,     7,     9,    20,    22,    24,    28,
      29,    30,    31,    34,    35,    40,    42,    43,    44,    45,
      46,    47,    54,    57,    65,    66,    71,    72,    74,    76,
      80,    82,    83,    84,    86,    87,    88,    89,    90,    91,
      93,    45,    57,    57,    82,    57,    46,    47,    57,    64,
      45,    45,    45,    86,    45,    91,    45,    91,    82,    45,
      61,    63,    78,    85,    46,    47,    60,    77,    54,    65,
      66,    63,    67,    68,    55,    81,    86,    86,    45,    85,
      45,    84,    58,    86,    94,    45,    58,    45,    57,    59,
      61,    77,    43,    62,    45,    59,    54,    54,    54,    86,
      54,    87,    87,    87,    87,    87,    71,    73,    74,    58,
      58,    54,    58,    59,    58,    57,    58,    75,    82,    85,
      43,    62,    59,    62,    45,    60,    85,    73,    56,    73,
      55,    83,    54,    54,    94,    58,    75,    54,    55,    58,
      45,    62,    60,    85,    60,    27,    71,    82,    83,    92,
      15,    54,    55,    58,    56,    92,    54,    55,    59,    60,
      55,    27,    82,    92,    92,    56,    55,    83,    56,    92,
      54,    55,    56,    56,    92,    75,    55,    79,    86,    82,
      61,    15,    92,    56,    56,    92,    56,    79,    56,    59,
      61,    43,    55,    83,    56,    56,    56,    79,    43,    62,
      92,    62,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    76,
      76,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    93,    93,
      94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     3,     4,
       5,     1,     1,     2,     2,     8,     9,     7,     8,     7,
       8,     6,     7,     6,     5,     7,     6,     2,     4,     1,
       1,     1,     2,     3,     4,     2,     3,     9,     8,     8,
       7,     1,     3,     5,     7,     7,     9,     9,    11,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     3,
       3,     2,     1,     1,     3,     1,     2,     4,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     2,     2,     3,     4,
       1,     3
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
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 19 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 20 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 21 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 22 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 23 "test.y" /* yacc.c:1646  */
    { /*empty*/ }
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 25 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
			}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 29 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"static %s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
			}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 34 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s %s {\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 39 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 42 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 54 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s){\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(){\n%s\n}",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
			}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s){ }",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
			}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 86 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(){ }",(yyvsp[-5].s),(yyvsp[-4].s));
			}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s));
			}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s(%s) ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
			}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 102 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s() ;",(yyvsp[-4].s),(yyvsp[-3].s));
			}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s(%s) ;",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
			}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf((yyval.s),"%s %s %s() ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s));
			}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 119 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 125 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 126 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"= %s",(yyvsp[0].s));
				}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 133 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[] %s",(yyvsp[0].s));
				}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 141 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"* %s",(yyvsp[0].s));
				}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 145 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[%d]",(yyvsp[-1].i));
				}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 149 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[] %s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 153 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"*%s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 157 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf((yyval.s),"%s[%d] = {%s}",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s));
				}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 161 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf((yyval.s),"%s[] = {%s}",(yyvsp[-6].s),(yyvsp[-1].s));
				}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s,%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 172 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 176 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 184 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s {\n%s\n}",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 188 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 192 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s {\n%s\n}",(yyvsp[-10].s),(yyvsp[-8].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 197 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);/*not full implement yet*/ }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 198 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 198 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 198 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 198 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 198 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 200 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 204 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 208 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 212 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ";"; }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 226 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s.%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 232 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 237 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 241 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 252 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 253 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s + %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 257 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s - %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 262 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 263 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s * %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 267 "test.y" /* yacc.c:1646  */
    {
					/*zero divisor*/
					if((yyvsp[0].s)[0]=='0') fprintf(stderr,"zero divisor\n");
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s / %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 273 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s \% %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 278 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 279 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 280 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"(%s)",(yyvsp[-1].s));
				}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 284 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 287 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 290 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 292 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"++%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 300 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"--%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 308 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"+%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 316 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 324 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 328 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 333 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s++",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 341 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s--",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 351 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%d",(yyvsp[0].i)); 
				}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 355 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%g",(yyvsp[0].d));
				}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 360 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s",(yyvsp[0].s));
				}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 364 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 365 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 369 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 374 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s()",(yyvsp[-2].s));
				}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 378 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s(%s)",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 383 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 384 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2361 "y.tab.c" /* yacc.c:1646  */
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
#line 389 "test.y" /* yacc.c:1906  */

int main(){
	yyparse();
	return 0;
}
