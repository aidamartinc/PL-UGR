/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED
# define YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CABECERA_PROGRAMA = 258,       /* CABECERA_PROGRAMA  */
    TIPO_PRIM = 259,               /* TIPO_PRIM  */
    TIPO_LISTA = 260,              /* TIPO_LISTA  */
    ID_IF = 261,                   /* ID_IF  */
    ID_ELSE = 262,                 /* ID_ELSE  */
    ID_WHILE = 263,                /* ID_WHILE  */
    ID_REPEAT = 264,               /* ID_REPEAT  */
    ID_UNTIL = 265,                /* ID_UNTIL  */
    ID_RETURN = 266,               /* ID_RETURN  */
    NOMB_ENTRADA = 267,            /* NOMB_ENTRADA  */
    NOMB_SALIDA = 268,             /* NOMB_SALIDA  */
    LISTA_SENT_DER = 269,          /* LISTA_SENT_DER  */
    LISTA_SENT_IZQ = 270,          /* LISTA_SENT_IZQ */
    OP_UN_DELANTE = 271,           /* OP_UN_DELANTE  */
    OP_BIN_TERN_PRIM = 272,        /* OP_BIN_TERN_PRIM  */
    OP_MAS_MENOS = 273,            /* OP_MAS_MENOS  */
    OP_MAS_MAS = 274,              /* OP_MAS_MAS */
    OP_MENOS_MENOS = 275,          /* OP_MENOS_MENOS */
    OP_BIN_MULTDIV = 276,          /* OP_BIN_MULTDIV  */
    OP_RELACION = 277,             /* OP_RELACION  */
    OP_IGUALDAD = 278,             /* OP_IGUALDAD  */
    OP_LOGICOS_OR = 279,           /* OP_LOGICOS_OR  */
    OP_LOGICOS_AND = 280,          /* OP_LOGICOS_AND  */
    OP_UN_NEG = 281,               /* OP_UN_NEG */
    OP_UN_QUEST = 282,             /* OP_UN_QUEST */
    OP_UN_SHARP = 283,             /* OP_UN_SHARP */
    IDENTIFICADOR = 284,           /* IDENTIFICADOR  */
    CADENA = 285,                  /* CADENA  */
    PAR_IZQ = 286,                 /* PAR_IZQ  */
    PAR_DER = 287,                 /* PAR_DER  */
    CORCH_IZQ = 288,               /* CORCH_IZQ  */
    CORCH_DER = 289,               /* CORCH_DER  */
    LLAVE_IZQ = 290,               /* LLAVE_IZQ  */
    LLAVE_DER = 291,               /* LLAVE_DER  */
    COMA = 292,                    /* COMA  */
    PYC = 293,                     /* PYC  */
    ASIGN = 294,                   /* ASIGN  */
    IVAR = 295,                    /* IVAR  */
    FVAR = 296,                    /* FVAR  */
    CONST_INT = 297,               /* CONST_INT  */
    CONST_FLOAT = 298,             /* CONST_FLOAT  */
    CONST_BOOL = 299,              /* CONST_BOOL  */
    CONST_CHAR = 300               /* CONST_CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED  */
