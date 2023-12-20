%{
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

%}

/** Para uso de mensajes de error sintactico con BISON .
*** La siguiente declaracion provoca que 'bison ', ante un error sintactico ,
*** visualice mensajes de error con indicacion de los tokens que se esperaban
*** en el lugar en el que produjo el error ( SOLO FUNCIONA CON BISON >=2.1) .
*** Para Bison <2.1 es mediante
***
*** # define YYERROR_VERBOSE
***
*** En caso de usar mensajes de error mediante 'mes ' y 'mes2 ' ( ver apendice D)
*** nada de lo anterior debe tenerse en cuenta .
**/

//%error-verbose

/** A continuacion declaramos los nombres simbolicos de los tokens .
*** byacc se encarga de asociar a cada uno un codigo
**/

%token CABECERA_PROGRAMA
%token TIPO_PRIM
%token TIPO_LISTA
%token ID_IF
%token ID_ELSE
%token ID_WHILE
%token ID_REPEAT
%token ID_UNTIL
%token ID_RETURN
%token NOMB_ENTRADA
%token NOMB_SALIDA
%token LISTA_SENT_DER LISTA_SENT_IZQ
%token OP_UN_DELANTE
%token OP_BIN_TERN_PRIM
%token IDENTIFICADOR
%token CADENA
%token PAR_IZQ
%token PAR_DER
%token CORCH_IZQ
%token CORCH_DER
%token LLAVE_IZQ
%token LLAVE_DER
%token COMA
%token PYC
%token ASIGN
%token IVAR FVAR

%token OP_BIN_MULTDIV /* * / */ 
%token OP_RELACION //>, <, >=, <=,
%token OP_IGUALDAD //  
%token OP_LOGICOS_OR
%token OP_LOGICOS_AND // && || != ==


%start programa

%right OP_BIN_TERN_PRIM

%left OP_LOGICOS_OR
%left OP_LOGICOS_AND
%left OP_IGUALDAD
%left OP_RELACION
%left OP_MAS_MENOS
%left OP_BIN_MULTDIV

%right OP_UN_NEG
%right OP_UN_SHARP
%right OP_UN_QUEST
%right OP_MENOS_MENOS
%right OP_MAS_MAS
%right LISTA_SENT_IZQ LISTA_SENT_DER

%right OP_UN_DELANTE


%left CONST_INT CONST_FLOAT CONST_BOOL CONST_CHAR IDENTIFICADOR
%right PAR_IZQ
%%



programa : CABECERA_PROGRAMA bloque;

bloque : LLAVE_IZQ { TS_AddMark(); }
         Declar_de_variables_locales
         Declar_de_subprogs
         /*CAMBIO*/
         Sentencia_opt
         /* Sentencias */
         LLAVE_DER { TS_ClearBlock(); } ;

Declar_de_subprogs : Declar_de_subprogs Declar_subprog
                   |
                   ;

Declar_subprog : Cabecera_subprog { esFunc = 1; } bloque { esFunc = 0; }
                ;

Declar_de_variables_locales : IVAR { decVar = 1; } decl_variables FVAR { decVar = 0; }
                  | 
                  ;

decl_variables : decl_variables lista_variables
                  | lista_variables
                  ;

lista_variables : tipo {setType($1); }lista_ident PYC 
                    | error
                  ;

lista_ident : lista_ident COMA IDENTIFICADOR { VarList_Id($3, &$$); }
            | IDENTIFICADOR { VarList_Id($1, &$$); }
            | error 
            ;

tipo : TIPO_PRIM { $$.type = $1.type; }
     | TIPO_LISTA TIPO_PRIM { $$.type = getListType($2.type); } ;

Cabecera_subprog : tipo IDENTIFICADOR  { setType($1); decParam = 1; TS_AddFunction($2); } 
                  PAR_IZQ 
                  lista_arg
                  PAR_DER { decParam = 0; $4.nDim = 0; } ;
                 ;
              
lista_arg  : argumentos 
           |
           | error
           ; 

argumentos : tipo IDENTIFICADOR { setType($1); TS_AddParam($2); } 
           | argumentos COMA tipo IDENTIFICADOR { setType($3); TS_AddParam($4); } 
         //  | error
           ; 

//CAMBIOS
Sentencia_opt :  Sentencias
              |
              ;

Sentencias : Sentencias {decVar = 2; } Sentencia
           | { decVar = 2; } Sentencia
           ;

Sentencia : bloque
          | sentencia_if
          | sentencia_while
          | sentencia_entrada
          | sentencia_salida 
          | sentencia_return
          | sentencia_repeat
          | sentencia_asignacion
          | sentencia_listas //CAMBIOS
          | error
          ;

sentencia_entrada : NOMB_ENTRADA lista_variables_entrada PYC;

sentencia_salida : NOMB_SALIDA lista_expresiones_o_cadena PYC;

//CAMBIOS
sentencia_listas : LISTA_SENT_IZQ IDENTIFICADOR  { Check_ListSentence($2); }
                 | IDENTIFICADOR LISTA_SENT_DER { Check_ListSentence($1); }
                 /*| OP_UNARIO IDENTIFICADOR { Check_ListSentence($2); }
                 | PYC*/
                 ;
                   
expresion : OP_UN_NEG expresion { Check_OpUnaryNeg($1, $2, &$$); }
          | OP_UN_SHARP expresion { Check_OpUnaryCount($1, $2, &$$); }
          | OP_UN_QUEST expresion { Check_OpUnaryQuest($1, $2, &$$); }
          | OP_MAS_MAS expresion { Check_IncrementDecrement($1, $2, &$$); }
          | OP_MENOS_MENOS expresion { Check_IncrementDecrement($1, $2, &$$); }
          | expresion OP_MAS_MENOS expresion { Check_PlusMinusBinary($1, $2, $3, &$$); }
          | OP_MAS_MENOS expresion  %prec OP_UN_DELANTE { Check_PlusMinus($1, $2, &$$); }
          | expresion OP_BIN_MULTDIV expresion { Check_OpBinaryMul($1, $2, $3, &$$); }
          | expresion OP_LOGICOS_AND expresion { Check_OpBinaryAndOr($1, $2, $3, &$$); }
          | expresion OP_LOGICOS_OR expresion { Check_OpBinaryAndOr($1, $2, $3, &$$); }
          | expresion OP_RELACION expresion { Check_OpBinaryRel($1, $2, $3, &$$); }
          | expresion OP_IGUALDAD expresion { Check_OpBinaryEq($1, $2, $3, &$$); }
          | expresion OP_BIN_TERN_PRIM expresion {Check_At($1, $2, $3, &$$); }
          | expresion OP_MENOS_MENOS expresion { Check_MinusMinus($1, $2, $3, &$$); }
          | expresion OP_BIN_TERN_PRIM expresion OP_MAS_MAS expresion { Check_ListTernary($1, $2, $3, $4, $5, &$$); }
          | IDENTIFICADOR  { $$.type = TS_GetType($1); $$.nDim = TS_GetNDim($1); decVar= 0;}
          | constante { $$.type = $1.type; $$.nDim = $1.nDim;}
          | lista
          | llamada_funcion { $$.type = $1.type; $$.nDim = $1.nDim; currentFunction = -1; }
          | PAR_IZQ expresion PAR_DER { $$.type = $2.type; $$.nDim = $2.nDim; }
          | error
          ;

constante : constante_base
          | constante_lista ;

constante_base : CONST_INT { $$.type = ENTERO; }
               | CONST_FLOAT { $$.type = REAL; }
               | CONST_BOOL { $$.type = BOOLEANO; }
               | CONST_CHAR { $$.type = CARACTER; } ;

constante_lista : CORCH_IZQ constante_lista_int CORCH_DER { $$.type = LISTA_ENTERO; $$.nDim = $2.nDim; }
                | CORCH_IZQ constante_lista_float CORCH_DER { $$.type = LISTA_REAL; $$.nDim = $2.nDim; }
                | CORCH_IZQ constante_lista_bool CORCH_DER { $$.type = LISTA_BOOLEANO; $$.nDim = $2.nDim; }
                | CORCH_IZQ constante_lista_char CORCH_DER { $$.type = LISTA_CARACTER; $$.nDim = $2.nDim; } ;

constante_lista_int : constante_lista_int COMA CONST_INT
                    | CONST_INT ;
constante_lista_float : constante_lista_float COMA CONST_FLOAT
                      | CONST_FLOAT ;
constante_lista_bool : constante_lista_bool COMA CONST_BOOL
                     | CONST_BOOL ;
constante_lista_char : constante_lista_char COMA CONST_CHAR
                     | CONST_CHAR ;



sentencia_asignacion : IDENTIFICADOR ASIGN expresion PYC { Check_Assign($1, $3); } ;

sentencia_if : ID_IF PAR_IZQ expresion PAR_DER Sentencia { Check_Boolean($3); }
             | ID_IF PAR_IZQ expresion PAR_DER Sentencia ID_ELSE Sentencia { Check_Boolean($3); } ;

sentencia_while : ID_WHILE PAR_IZQ expresion PAR_DER Sentencia { Check_Boolean($3); } ;
sentencia_repeat : ID_REPEAT Sentencia ID_UNTIL PAR_IZQ expresion PAR_DER PYC { Check_Boolean($5); };
sentencia_return : ID_RETURN expresion { TS_CheckReturn($2, &$$); } PYC;


lista_variables_entrada : lista_variables_entrada COMA IDENTIFICADOR { VarList_Id($3, &$$); }
                /* | lista_variables_entrada COMA constante */
                | IDENTIFICADOR { VarList_Id($1, &$$); }
                /* | constante  */
                | lista_variables_entrada error IDENTIFICADOR
                ;


lista_expresiones_o_cadena : lista_expresiones_o_cadena COMA expresion { nParams++; TS_CheckParam($1); }
                           | lista_expresiones_o_cadena COMA CADENA { nParams++; TS_CheckParam($1); }
                           | expresion { nParams=1; TS_CheckParam($1); }
                           | sentencia_listas //CAMBIOS
                           | CADENA { nParams=1; TS_CheckParam($1); }
                           ;


lista : CORCH_IZQ lista_variables_entrada CORCH_DER 
      ;

llamada_funcion : IDENTIFICADOR PAR_IZQ lista_expresiones PAR_DER { Check_FunctionCall($1); TS_FunctionCall(&$$); } 
            ; 

lista_expresiones : lista_expresiones COMA expresion { /*nParams++;*/ TS_CheckParam($1); } /* TS_CheckParam($3); */
                  | expresion { /* WIP correct? -> */ checkParams = 0; TS_CheckParam($1); } ;
                  |
                  ;

%%
/** aqui incluimos el fichero generado por el 'lex '
*** que implementa la funcion 'yylex '
**/

#include "lex.yy.c"



void yyerror ( const char * msg )
{
     fprintf ( stderr ,"[ Error Sintactico. Linea %d]: %s\n", yylineno , msg ) ;
}