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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/esp_sint.y"

/* ********************************************************
**
** Fichero : PRUEBA .Y
** Funcion : Pruebas de YACC para practicas de PL
**
******************************************************* */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantica.h"

// #include "./include/semantica.h"

int yylex() ; 

/** La siguiente declaracion permite que 'yyerror ' se pueda invocar desde el
*** fuente de lex ( prueba .l)
**/

void yyerror ( const char * msg ) ;

/** La siguiente variable se usara para conocer el numero de la linea
*** que se esta leyendo en cada momento . Tambien es posible usar la variable
*** 'yylineno ' que tambien nos muestra la linea actual . Para ello es necesario
*** invocar a flex con la opcion '-l' ( compatibilidad con lex ).
**/

//int linea_actual = 1 ;

#define YYERROR_VERBOSE


#line 105 "esp_sint.tab.c"

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

#include "esp_sint.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CABECERA_PROGRAMA = 3,          /* CABECERA_PROGRAMA  */
  YYSYMBOL_TIPO_PRIM = 4,                  /* TIPO_PRIM  */
  YYSYMBOL_TIPO_LISTA = 5,                 /* TIPO_LISTA  */
  YYSYMBOL_ID_IF = 6,                      /* ID_IF  */
  YYSYMBOL_ID_ELSE = 7,                    /* ID_ELSE  */
  YYSYMBOL_ID_WHILE = 8,                   /* ID_WHILE  */
  YYSYMBOL_ID_REPEAT = 9,                  /* ID_REPEAT  */
  YYSYMBOL_ID_UNTIL = 10,                  /* ID_UNTIL  */
  YYSYMBOL_ID_RETURN = 11,                 /* ID_RETURN  */
  YYSYMBOL_NOMB_ENTRADA = 12,              /* NOMB_ENTRADA  */
  YYSYMBOL_NOMB_SALIDA = 13,               /* NOMB_SALIDA  */
  YYSYMBOL_LISTA_SENT_DER = 14,            /* LISTA_SENT_DER  */
  YYSYMBOL_LISTA_SENT_IZQ = 15,            /* LISTA_SENT_IZQ  */
  YYSYMBOL_EXPR_LISTA_IZQ = 16,            /* EXPR_LISTA_IZQ  */
  YYSYMBOL_EXPR_LISTA_DER = 17,            /* EXPR_LISTA_DER  */
  YYSYMBOL_OP_UN_DELANTE = 18,             /* OP_UN_DELANTE  */
  YYSYMBOL_OP_BIN_TERN_PRIM = 19,          /* OP_BIN_TERN_PRIM  */
  YYSYMBOL_OP_BIN_TERN_SEG = 20,           /* OP_BIN_TERN_SEG  */
  YYSYMBOL_OP_BINARIO = 21,                /* OP_BINARIO  */
  YYSYMBOL_OP_UNARIO = 22,                 /* OP_UNARIO  */
  YYSYMBOL_OP_UN_BIN = 23,                 /* OP_UN_BIN  */
  YYSYMBOL_IDENTIFICADOR = 24,             /* IDENTIFICADOR  */
  YYSYMBOL_CADENA = 25,                    /* CADENA  */
  YYSYMBOL_PAR_IZQ = 26,                   /* PAR_IZQ  */
  YYSYMBOL_PAR_DER = 27,                   /* PAR_DER  */
  YYSYMBOL_CORCH_IZQ = 28,                 /* CORCH_IZQ  */
  YYSYMBOL_CORCH_DER = 29,                 /* CORCH_DER  */
  YYSYMBOL_LLAVE_IZQ = 30,                 /* LLAVE_IZQ  */
  YYSYMBOL_LLAVE_DER = 31,                 /* LLAVE_DER  */
  YYSYMBOL_COMA = 32,                      /* COMA  */
  YYSYMBOL_PYC = 33,                       /* PYC  */
  YYSYMBOL_ASIGN = 34,                     /* ASIGN  */
  YYSYMBOL_IVAR = 35,                      /* IVAR  */
  YYSYMBOL_FVAR = 36,                      /* FVAR  */
  YYSYMBOL_OP_BIN_MULTDIV = 37,            /* OP_BIN_MULTDIV  */
  YYSYMBOL_OP_RELACION = 38,               /* OP_RELACION  */
  YYSYMBOL_OP_IGUALDAD = 39,               /* OP_IGUALDAD  */
  YYSYMBOL_OP_LOGICOS_OR = 40,             /* OP_LOGICOS_OR  */
  YYSYMBOL_OP_LOGICOS_AND = 41,            /* OP_LOGICOS_AND  */
  YYSYMBOL_OP_BINARIO_LISTAS = 42,         /* OP_BINARIO_LISTAS  */
  YYSYMBOL_OP_TER_LIST = 43,               /* OP_TER_LIST  */
  YYSYMBOL_OP_MAS_MENOS = 44,              /* OP_MAS_MENOS  */
  YYSYMBOL_OP_UN_NEG = 45,                 /* OP_UN_NEG  */
  YYSYMBOL_OP_UN_SHARP = 46,               /* OP_UN_SHARP  */
  YYSYMBOL_OP_UN_QUEST = 47,               /* OP_UN_QUEST  */
  YYSYMBOL_OP_MENOS_MENOS = 48,            /* OP_MENOS_MENOS  */
  YYSYMBOL_OP_MAS_MAS = 49,                /* OP_MAS_MAS  */
  YYSYMBOL_CONST_INT = 50,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 51,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_BOOL = 52,                /* CONST_BOOL  */
  YYSYMBOL_CONST_CHAR = 53,                /* CONST_CHAR  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_programa = 55,                  /* programa  */
  YYSYMBOL_bloque = 56,                    /* bloque  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_Declar_de_subprogs = 58,        /* Declar_de_subprogs  */
  YYSYMBOL_Declar_subprog = 59,            /* Declar_subprog  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_Declar_de_variables_locales = 61, /* Declar_de_variables_locales  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_decl_variables = 63,            /* decl_variables  */
  YYSYMBOL_lista_variables = 64,           /* lista_variables  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_lista_ident = 66,               /* lista_ident  */
  YYSYMBOL_tipo = 67,                      /* tipo  */
  YYSYMBOL_Cabecera_subprog = 68,          /* Cabecera_subprog  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_lista_arg = 70,                 /* lista_arg  */
  YYSYMBOL_argumentos = 71,                /* argumentos  */
  YYSYMBOL_Sentencia_opt = 72,             /* Sentencia_opt  */
  YYSYMBOL_Sentencias = 73,                /* Sentencias  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_Sentencia = 76,                 /* Sentencia  */
  YYSYMBOL_sentencia_entrada = 77,         /* sentencia_entrada  */
  YYSYMBOL_sentencia_salida = 78,          /* sentencia_salida  */
  YYSYMBOL_sentencia_listas = 79,          /* sentencia_listas  */
  YYSYMBOL_expresion = 80,                 /* expresion  */
  YYSYMBOL_constante = 81,                 /* constante  */
  YYSYMBOL_constante_base = 82,            /* constante_base  */
  YYSYMBOL_constante_lista = 83,           /* constante_lista  */
  YYSYMBOL_constante_lista_int = 84,       /* constante_lista_int  */
  YYSYMBOL_constante_lista_float = 85,     /* constante_lista_float  */
  YYSYMBOL_constante_lista_bool = 86,      /* constante_lista_bool  */
  YYSYMBOL_constante_lista_char = 87,      /* constante_lista_char  */
  YYSYMBOL_sentencia_asignacion = 88,      /* sentencia_asignacion  */
  YYSYMBOL_sentencia_if = 89,              /* sentencia_if  */
  YYSYMBOL_sentencia_while = 90,           /* sentencia_while  */
  YYSYMBOL_sentencia_repeat = 91,          /* sentencia_repeat  */
  YYSYMBOL_sentencia_return = 92,          /* sentencia_return  */
  YYSYMBOL_93_8 = 93,                      /* @8  */
  YYSYMBOL_lista_variables_entrada = 94,   /* lista_variables_entrada  */
  YYSYMBOL_lista_expresiones_o_cadena = 95, /* lista_expresiones_o_cadena  */
  YYSYMBOL_lista = 96,                     /* lista  */
  YYSYMBOL_llamada_funcion = 97,           /* llamada_funcion  */
  YYSYMBOL_lista_expresiones = 98          /* lista_expresiones  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   141,   141,   143,   143,   151,   152,   155,   155,   158,
     158,   159,   162,   163,   166,   166,   169,   170,   171,   174,
     175,   177,   177,   183,   184,   187,   188,   189,   193,   194,
     197,   197,   198,   198,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   213,   215,   218,   219,   224,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   251,   252,
     254,   255,   256,   257,   259,   260,   261,   262,   264,   265,
     266,   267,   268,   269,   270,   271,   275,   277,   278,   280,
     281,   282,   282,   285,   287,   292,   293,   294,   295,   296,
     300,   303,   306,   307,   308
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
  "\"end of file\"", "error", "\"invalid token\"", "CABECERA_PROGRAMA",
  "TIPO_PRIM", "TIPO_LISTA", "ID_IF", "ID_ELSE", "ID_WHILE", "ID_REPEAT",
  "ID_UNTIL", "ID_RETURN", "NOMB_ENTRADA", "NOMB_SALIDA", "LISTA_SENT_DER",
  "LISTA_SENT_IZQ", "EXPR_LISTA_IZQ", "EXPR_LISTA_DER", "OP_UN_DELANTE",
  "OP_BIN_TERN_PRIM", "OP_BIN_TERN_SEG", "OP_BINARIO", "OP_UNARIO",
  "OP_UN_BIN", "IDENTIFICADOR", "CADENA", "PAR_IZQ", "PAR_DER",
  "CORCH_IZQ", "CORCH_DER", "LLAVE_IZQ", "LLAVE_DER", "COMA", "PYC",
  "ASIGN", "IVAR", "FVAR", "OP_BIN_MULTDIV", "OP_RELACION", "OP_IGUALDAD",
  "OP_LOGICOS_OR", "OP_LOGICOS_AND", "OP_BINARIO_LISTAS", "OP_TER_LIST",
  "OP_MAS_MENOS", "OP_UN_NEG", "OP_UN_SHARP", "OP_UN_QUEST",
  "OP_MENOS_MENOS", "OP_MAS_MAS", "CONST_INT", "CONST_FLOAT", "CONST_BOOL",
  "CONST_CHAR", "$accept", "programa", "bloque", "$@1",
  "Declar_de_subprogs", "Declar_subprog", "$@2",
  "Declar_de_variables_locales", "$@3", "decl_variables",
  "lista_variables", "$@4", "lista_ident", "tipo", "Cabecera_subprog",
  "$@5", "lista_arg", "argumentos", "Sentencia_opt", "Sentencias", "$@6",
  "$@7", "Sentencia", "sentencia_entrada", "sentencia_salida",
  "sentencia_listas", "expresion", "constante", "constante_base",
  "constante_lista", "constante_lista_int", "constante_lista_float",
  "constante_lista_bool", "constante_lista_char", "sentencia_asignacion",
  "sentencia_if", "sentencia_while", "sentencia_repeat",
  "sentencia_return", "@8", "lista_variables_entrada",
  "lista_expresiones_o_cadena", "lista", "llamada_funcion",
  "lista_expresiones", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    53,    96,   -29,   -29,   -29,    75,   -29,   -29,    72,
      10,   -29,   109,     7,   -29,   -29,   -29,    90,   -29,   107,
     115,   164,   -29,   -29,   -29,     1,   -29,    53,   -29,   164,
     -29,   114,   117,   164,   111,   123,     6,   126,    47,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,    46,   125,   -29,   -29,   111,   111,   142,   -29,   127,
     111,    -5,   111,   111,   111,   111,   111,   111,   -29,   -29,
     -29,   -29,   216,   -29,   -29,   -29,   -29,   -29,   -29,    59,
      -8,   -29,   -29,   216,   112,   -29,   -29,   111,   156,   -29,
      22,   159,   168,   128,    71,   183,   -29,   -29,   -29,   -29,
     -19,   -12,    39,    41,    79,   162,   162,   162,   162,   162,
     162,   111,   111,   111,   111,   111,   111,   111,   149,   165,
     -29,    81,   -29,   192,   -29,   -29,   166,   174,   151,   164,
     164,   111,   216,   -24,   -29,   -29,   143,   -29,   141,   -29,
     152,   -29,   160,   -29,    25,   162,    56,   147,   130,   224,
     -15,   -29,   -29,   -29,   216,   -29,   -29,   -29,    72,   208,
     -29,   207,   -29,   111,   -29,   -29,   -29,   -29,   111,   190,
     164,   184,   216,   162,   -29,   -29,   -29
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,    11,     9,     6,     0,
      32,    19,     0,     0,    13,    14,     5,     0,     7,     0,
      30,     0,    20,    10,    12,     0,    21,     0,     4,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      33,    37,    38,    42,    41,    35,    36,    40,    39,    18,
      17,     0,     0,     8,    31,     0,     0,     0,    67,    63,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    91,    64,    68,    69,    65,    66,    94,     0,
      63,    99,    98,    97,     0,    46,    47,     0,     0,    15,
       0,     0,     0,     0,     0,     0,    79,    81,    83,    85,
       0,     0,     0,     0,     0,    50,    49,    59,    60,    53,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,     0,    16,    27,     0,     0,    23,     0,
       0,     0,   103,     0,    48,    74,     0,    75,     0,    76,
       0,    77,     0,   100,    61,    54,    55,    56,    57,    58,
      51,    92,    93,    96,    95,    86,    25,    22,     0,    87,
      89,     0,   101,     0,    78,    80,    82,    84,     0,     0,
       0,     0,   102,    62,    26,    88,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -29,   -29,    15,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     203,   -29,   -29,   -10,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -28,   -29,   -29,   182,   -27,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     158,   -29,   -29,   -29,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    39,     6,    10,    16,    27,     8,     9,    13,
      14,    25,    51,    15,    18,    52,   127,   128,    19,    20,
      29,    21,    40,    41,    42,    43,    72,    73,    74,    75,
     100,   101,   102,   103,    44,    45,    46,    47,    48,   118,
      79,    84,    76,    77,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    54,    49,   162,   111,    57,    86,    58,   163,    83,
     135,    11,    12,   136,    11,    12,     4,   137,    94,    78,
     138,    37,   112,   125,     1,    50,    11,    12,    91,    92,
      80,    81,    60,    95,    61,   105,   106,   107,   108,   109,
     110,   -29,    53,    23,   111,    96,    97,    98,    99,   -24,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
     123,    86,   112,   113,   114,   115,   116,   132,   139,   117,
     141,   140,    58,   142,   168,   111,    11,    12,    88,    89,
     126,    87,    58,     3,   144,   145,   146,   147,   148,   149,
     150,   119,   120,   112,   154,    59,     5,    60,  -104,    61,
     117,   159,   160,  -104,   161,    59,   153,    60,   143,    61,
       7,   119,    58,    22,    26,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    59,   172,    60,    28,    61,
      55,   173,   175,    56,   121,   122,   -28,    78,   169,   111,
      85,    90,    93,    94,   131,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    30,   111,   112,   113,   114,
      31,   116,    32,    33,   117,    34,    35,    36,   111,    37,
     124,   111,   151,   158,   112,   113,   129,   111,    38,   152,
     156,   117,   165,   164,     3,   130,   112,   113,   114,   115,
     116,   157,   111,   117,   166,   112,   113,   114,   115,   116,
     134,   111,   117,   167,   174,   170,    24,   176,    82,   104,
     112,   113,   114,   115,   116,   155,   111,   117,     0,   112,
     113,   114,   115,   116,   171,   111,   117,     0,     0,     0,
       0,     0,     0,   111,   112,   113,   114,   115,   116,     0,
       0,   117,     0,   112,   113,   114,   115,   116,     0,     0,
     117,   112,   113,   114,     0,     0,     0,     0,   117
};

static const yytype_int16 yycheck[] =
{
      10,    29,     1,    27,    19,    33,    14,     1,    32,    36,
      29,     4,     5,    32,     4,     5,     1,    29,    26,    24,
      32,    15,    37,     1,     3,    24,     4,     5,    55,    56,
      24,    25,    26,    60,    28,    62,    63,    64,    65,    66,
      67,    31,    27,    36,    19,    50,    51,    52,    53,    27,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      87,    14,    37,    38,    39,    40,    41,    94,    29,    44,
      29,    32,     1,    32,    49,    19,     4,     5,    32,    33,
      90,    34,     1,    30,   111,   112,   113,   114,   115,   116,
     117,    32,    33,    37,   121,    24,     0,    26,    27,    28,
      44,   129,   130,    32,   131,    24,    25,    26,    29,    28,
      35,    32,     1,     4,    24,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    24,   163,    26,    31,    28,
      26,   168,   170,    26,    32,    33,    31,    24,   158,    19,
      24,    26,    10,    26,    26,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    19,    37,    38,    39,
       6,    41,     8,     9,    44,    11,    12,    13,    19,    15,
      24,    19,    33,    32,    37,    38,    27,    19,    24,    24,
      24,    44,    51,    50,    30,    27,    37,    38,    39,    40,
      41,    27,    19,    44,    52,    37,    38,    39,    40,    41,
      27,    19,    44,    53,    24,     7,    13,    33,    36,    61,
      37,    38,    39,    40,    41,    33,    19,    44,    -1,    37,
      38,    39,    40,    41,    27,    19,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      44,    37,    38,    39,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    55,    30,    56,     0,    57,    35,    61,    62,
      58,     4,     5,    63,    64,    67,    59,    67,    68,    72,
      73,    75,     4,    36,    64,    65,    24,    60,    31,    74,
       1,     6,     8,     9,    11,    12,    13,    15,    24,    56,
      76,    77,    78,    79,    88,    89,    90,    91,    92,     1,
      24,    66,    69,    56,    76,    26,    26,    76,     1,    24,
      26,    28,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    80,    81,    82,    83,    96,    97,    24,    94,
      24,    25,    79,    80,    95,    24,    14,    34,    32,    33,
      26,    80,    80,    10,    26,    80,    50,    51,    52,    53,
      84,    85,    86,    87,    94,    80,    80,    80,    80,    80,
      80,    19,    37,    38,    39,    40,    41,    44,    93,    32,
      33,    32,    33,    80,    24,     1,    67,    70,    71,    27,
      27,    26,    80,    98,    27,    29,    32,    29,    32,    29,
      32,    29,    32,    29,    80,    80,    80,    80,    80,    80,
      80,    33,    24,    25,    80,    33,    24,    27,    32,    76,
      76,    80,    27,    32,    50,    51,    52,    53,    49,    67,
       7,    27,    80,    80,    24,    76,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    57,    56,    58,    58,    60,    59,    62,
      61,    61,    63,    63,    65,    64,    66,    66,    66,    67,
      67,    69,    68,    70,    70,    71,    71,    71,    72,    72,
      74,    73,    75,    73,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    89,    89,    90,
      91,    93,    92,    94,    94,    95,    95,    95,    95,    95,
      96,    97,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     6,     2,     0,     0,     3,     0,
       4,     0,     2,     1,     0,     4,     3,     1,     1,     1,
       2,     0,     6,     1,     0,     2,     4,     1,     1,     0,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     3,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     3,     2,
       2,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     4,     5,     7,     5,
       7,     0,     4,     3,     1,     3,     3,     1,     1,     1,
       3,     4,     3,     1,     0
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* $@1: %empty  */
#line 143 "src/esp_sint.y"
                   { TS_AddMark(); }
#line 1344 "esp_sint.tab.c"
    break;

  case 4: /* bloque: LLAVE_IZQ $@1 Declar_de_variables_locales Declar_de_subprogs Sentencia_opt LLAVE_DER  */
#line 149 "src/esp_sint.y"
                   { TS_ClearBlock(); }
#line 1350 "esp_sint.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 155 "src/esp_sint.y"
                                  { esFunc = 1; }
#line 1356 "esp_sint.tab.c"
    break;

  case 8: /* Declar_subprog: Cabecera_subprog $@2 bloque  */
#line 155 "src/esp_sint.y"
                                                         { esFunc = 0; }
#line 1362 "esp_sint.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 158 "src/esp_sint.y"
                                   { decVar = 1; }
#line 1368 "esp_sint.tab.c"
    break;

  case 10: /* Declar_de_variables_locales: IVAR $@3 decl_variables FVAR  */
#line 158 "src/esp_sint.y"
                                                                       { decVar = 0; }
#line 1374 "esp_sint.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 166 "src/esp_sint.y"
                       {setType(yyvsp[0]); }
#line 1380 "esp_sint.tab.c"
    break;

  case 16: /* lista_ident: lista_ident COMA IDENTIFICADOR  */
#line 169 "src/esp_sint.y"
                                             { VarList_Id(yyvsp[0], &yyval); }
#line 1386 "esp_sint.tab.c"
    break;

  case 17: /* lista_ident: IDENTIFICADOR  */
#line 170 "src/esp_sint.y"
                            { VarList_Id(yyvsp[0], &yyval); }
#line 1392 "esp_sint.tab.c"
    break;

  case 19: /* tipo: TIPO_PRIM  */
#line 174 "src/esp_sint.y"
                 { yyval.type = yyvsp[0].type; }
#line 1398 "esp_sint.tab.c"
    break;

  case 20: /* tipo: TIPO_LISTA TIPO_PRIM  */
#line 175 "src/esp_sint.y"
                            { yyval.type = getListType(yyvsp[0].type); }
#line 1404 "esp_sint.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 177 "src/esp_sint.y"
                                       { setType(yyvsp[-1]); decParam = 1; TS_AddFunction(yyvsp[0]); }
#line 1410 "esp_sint.tab.c"
    break;

  case 22: /* Cabecera_subprog: tipo IDENTIFICADOR $@5 PAR_IZQ lista_arg PAR_DER  */
#line 180 "src/esp_sint.y"
                          { decParam = 0; yyvsp[-2].nDim = 0; }
#line 1416 "esp_sint.tab.c"
    break;

  case 25: /* argumentos: tipo IDENTIFICADOR  */
#line 187 "src/esp_sint.y"
                                { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1422 "esp_sint.tab.c"
    break;

  case 26: /* argumentos: argumentos COMA tipo IDENTIFICADOR  */
#line 188 "src/esp_sint.y"
                                                { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1428 "esp_sint.tab.c"
    break;

  case 30: /* $@6: %empty  */
#line 197 "src/esp_sint.y"
                        {decVar = 2; }
#line 1434 "esp_sint.tab.c"
    break;

  case 32: /* $@7: %empty  */
#line 198 "src/esp_sint.y"
             { decVar = 2; }
#line 1440 "esp_sint.tab.c"
    break;

  case 46: /* sentencia_listas: LISTA_SENT_IZQ IDENTIFICADOR  */
#line 218 "src/esp_sint.y"
                                                 { Check_ListSentence(yyvsp[0]); }
#line 1446 "esp_sint.tab.c"
    break;

  case 47: /* sentencia_listas: IDENTIFICADOR LISTA_SENT_DER  */
#line 219 "src/esp_sint.y"
                                                { Check_ListSentence(yyvsp[-1]); }
#line 1452 "esp_sint.tab.c"
    break;

  case 48: /* expresion: PAR_IZQ expresion PAR_DER  */
#line 224 "src/esp_sint.y"
                                      { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; }
#line 1458 "esp_sint.tab.c"
    break;

  case 49: /* expresion: OP_UN_NEG expresion  */
#line 226 "src/esp_sint.y"
                                { Check_OpUnaryNeg(yyvsp[-1], yyvsp[0], &yyval); }
#line 1464 "esp_sint.tab.c"
    break;

  case 50: /* expresion: OP_MAS_MENOS expresion  */
#line 227 "src/esp_sint.y"
                                                    { Check_PlusMinus(yyvsp[-1], yyvsp[0], &yyval); }
#line 1470 "esp_sint.tab.c"
    break;

  case 51: /* expresion: expresion OP_MAS_MENOS expresion  */
#line 228 "src/esp_sint.y"
                                             { Check_PlusMinusBinary(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1476 "esp_sint.tab.c"
    break;

  case 52: /* expresion: OP_MAS_MAS expresion  */
#line 229 "src/esp_sint.y"
                                 { Check_IncrementDecrement(yyvsp[-1], yyvsp[0], &yyval); }
#line 1482 "esp_sint.tab.c"
    break;

  case 53: /* expresion: OP_MENOS_MENOS expresion  */
#line 230 "src/esp_sint.y"
                                     { Check_IncrementDecrement(yyvsp[-1], yyvsp[0], &yyval); }
#line 1488 "esp_sint.tab.c"
    break;

  case 54: /* expresion: expresion OP_BIN_MULTDIV expresion  */
#line 231 "src/esp_sint.y"
                                               { Check_OpBinaryMul(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1494 "esp_sint.tab.c"
    break;

  case 55: /* expresion: expresion OP_RELACION expresion  */
#line 232 "src/esp_sint.y"
                                            { Check_OpBinaryRel(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1500 "esp_sint.tab.c"
    break;

  case 56: /* expresion: expresion OP_IGUALDAD expresion  */
#line 233 "src/esp_sint.y"
                                            { Check_OpBinaryEq(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1506 "esp_sint.tab.c"
    break;

  case 57: /* expresion: expresion OP_LOGICOS_OR expresion  */
#line 234 "src/esp_sint.y"
                                              { Check_OpBinaryAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1512 "esp_sint.tab.c"
    break;

  case 58: /* expresion: expresion OP_LOGICOS_AND expresion  */
#line 235 "src/esp_sint.y"
                                               { Check_OpBinaryAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1518 "esp_sint.tab.c"
    break;

  case 59: /* expresion: OP_UN_SHARP expresion  */
#line 240 "src/esp_sint.y"
                                  { Check_OpUnaryCount(yyvsp[-1], yyvsp[0], &yyval); }
#line 1524 "esp_sint.tab.c"
    break;

  case 60: /* expresion: OP_UN_QUEST expresion  */
#line 241 "src/esp_sint.y"
                                  { Check_OpUnaryQuest(yyvsp[-1], yyvsp[0], &yyval); }
#line 1530 "esp_sint.tab.c"
    break;

  case 61: /* expresion: expresion OP_BIN_TERN_PRIM expresion  */
#line 242 "src/esp_sint.y"
                                                 {Check_At(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1536 "esp_sint.tab.c"
    break;

  case 62: /* expresion: expresion OP_BIN_TERN_PRIM expresion OP_MAS_MAS expresion  */
#line 243 "src/esp_sint.y"
                                                                      { Check_ListTernary(yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1542 "esp_sint.tab.c"
    break;

  case 63: /* expresion: IDENTIFICADOR  */
#line 244 "src/esp_sint.y"
                           { yyval.type = TS_GetType(yyvsp[0]); yyval.nDim = TS_GetNDim(yyvsp[0]); decVar= 0;}
#line 1548 "esp_sint.tab.c"
    break;

  case 64: /* expresion: constante  */
#line 245 "src/esp_sint.y"
                      { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim;}
#line 1554 "esp_sint.tab.c"
    break;

  case 66: /* expresion: llamada_funcion  */
#line 247 "src/esp_sint.y"
                            { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; currentFunction = -1; }
#line 1560 "esp_sint.tab.c"
    break;

  case 70: /* constante_base: CONST_INT  */
#line 254 "src/esp_sint.y"
                           { yyval.type = ENTERO; }
#line 1566 "esp_sint.tab.c"
    break;

  case 71: /* constante_base: CONST_FLOAT  */
#line 255 "src/esp_sint.y"
                             { yyval.type = REAL; }
#line 1572 "esp_sint.tab.c"
    break;

  case 72: /* constante_base: CONST_BOOL  */
#line 256 "src/esp_sint.y"
                            { yyval.type = BOOLEANO; }
#line 1578 "esp_sint.tab.c"
    break;

  case 73: /* constante_base: CONST_CHAR  */
#line 257 "src/esp_sint.y"
                            { yyval.type = CARACTER; }
#line 1584 "esp_sint.tab.c"
    break;

  case 74: /* constante_lista: CORCH_IZQ constante_lista_int CORCH_DER  */
#line 259 "src/esp_sint.y"
                                                          { yyval.type = LISTA_ENTERO; yyval.nDim = yyvsp[-1].nDim; }
#line 1590 "esp_sint.tab.c"
    break;

  case 75: /* constante_lista: CORCH_IZQ constante_lista_float CORCH_DER  */
#line 260 "src/esp_sint.y"
                                                            { yyval.type = LISTA_REAL; yyval.nDim = yyvsp[-1].nDim; }
#line 1596 "esp_sint.tab.c"
    break;

  case 76: /* constante_lista: CORCH_IZQ constante_lista_bool CORCH_DER  */
#line 261 "src/esp_sint.y"
                                                           { yyval.type = LISTA_BOOLEANO; yyval.nDim = yyvsp[-1].nDim; }
#line 1602 "esp_sint.tab.c"
    break;

  case 77: /* constante_lista: CORCH_IZQ constante_lista_char CORCH_DER  */
#line 262 "src/esp_sint.y"
                                                           { yyval.type = LISTA_CARACTER; yyval.nDim = yyvsp[-1].nDim; }
#line 1608 "esp_sint.tab.c"
    break;

  case 86: /* sentencia_asignacion: IDENTIFICADOR ASIGN expresion PYC  */
#line 275 "src/esp_sint.y"
                                                         { Check_Assign(yyvsp[-3], yyvsp[-1]); }
#line 1614 "esp_sint.tab.c"
    break;

  case 87: /* sentencia_if: ID_IF PAR_IZQ expresion PAR_DER Sentencia  */
#line 277 "src/esp_sint.y"
                                                         { Check_Boolean(yyvsp[-2]); }
#line 1620 "esp_sint.tab.c"
    break;

  case 88: /* sentencia_if: ID_IF PAR_IZQ expresion PAR_DER Sentencia ID_ELSE Sentencia  */
#line 278 "src/esp_sint.y"
                                                                           { Check_Boolean(yyvsp[-4]); }
#line 1626 "esp_sint.tab.c"
    break;

  case 89: /* sentencia_while: ID_WHILE PAR_IZQ expresion PAR_DER Sentencia  */
#line 280 "src/esp_sint.y"
                                                               { Check_Boolean(yyvsp[-2]); }
#line 1632 "esp_sint.tab.c"
    break;

  case 90: /* sentencia_repeat: ID_REPEAT Sentencia ID_UNTIL PAR_IZQ expresion PAR_DER PYC  */
#line 281 "src/esp_sint.y"
                                                                              { Check_Boolean(yyvsp[-2]); }
#line 1638 "esp_sint.tab.c"
    break;

  case 91: /* @8: %empty  */
#line 282 "src/esp_sint.y"
                                       { TS_CheckReturn(yyvsp[0], &yyval); }
#line 1644 "esp_sint.tab.c"
    break;

  case 93: /* lista_variables_entrada: lista_variables_entrada COMA IDENTIFICADOR  */
#line 285 "src/esp_sint.y"
                                                                     { VarList_Id(yyvsp[0], &yyval); }
#line 1650 "esp_sint.tab.c"
    break;

  case 94: /* lista_variables_entrada: IDENTIFICADOR  */
#line 287 "src/esp_sint.y"
                                { VarList_Id(yyvsp[0], &yyval); }
#line 1656 "esp_sint.tab.c"
    break;

  case 95: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA expresion  */
#line 292 "src/esp_sint.y"
                                                                       { nParams++; TS_CheckParam(yyvsp[-2]); }
#line 1662 "esp_sint.tab.c"
    break;

  case 96: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA CADENA  */
#line 293 "src/esp_sint.y"
                                                                    { nParams++; TS_CheckParam(yyvsp[-2]); }
#line 1668 "esp_sint.tab.c"
    break;

  case 97: /* lista_expresiones_o_cadena: expresion  */
#line 294 "src/esp_sint.y"
                                       { nParams=1; TS_CheckParam(yyvsp[0]); }
#line 1674 "esp_sint.tab.c"
    break;

  case 99: /* lista_expresiones_o_cadena: CADENA  */
#line 296 "src/esp_sint.y"
                                    { nParams=1; TS_CheckParam(yyvsp[0]); }
#line 1680 "esp_sint.tab.c"
    break;

  case 101: /* llamada_funcion: IDENTIFICADOR PAR_IZQ lista_expresiones PAR_DER  */
#line 303 "src/esp_sint.y"
                                                                  { Check_FunctionCall(yyvsp[-3]); TS_FunctionCall(&yyval); }
#line 1686 "esp_sint.tab.c"
    break;

  case 102: /* lista_expresiones: lista_expresiones COMA expresion  */
#line 306 "src/esp_sint.y"
                                                     { /*nParams++;*/ TS_CheckParam(yyvsp[-2]); }
#line 1692 "esp_sint.tab.c"
    break;

  case 103: /* lista_expresiones: expresion  */
#line 307 "src/esp_sint.y"
                              { /* WIP correct? -> */ checkParams = 0; TS_CheckParam(yyvsp[0]); }
#line 1698 "esp_sint.tab.c"
    break;


#line 1702 "esp_sint.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 311 "src/esp_sint.y"

/** aqui incluimos el fichero generado por el 'lex '
*** que implementa la funcion 'yylex '
**/

#include "lex.yy.c"



void yyerror ( const char * msg )
{
     fprintf ( stderr ,"[ Error Sintactico. Linea %d]: %s\n", yylineno , msg ) ;
}
