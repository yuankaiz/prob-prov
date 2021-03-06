/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_OL_PARSER_OL_PARSER_HH_INCLUDED
# define YY_OL_PARSER_OL_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int ol_parser_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OL_OR = 258,
    OL_AND = 259,
    OL_BITOR = 260,
    OL_BITXOR = 261,
    OL_BITAND = 262,
    OL_BITNOT = 263,
    OL_EQ = 264,
    OL_NEQ = 265,
    OL_GT = 266,
    OL_GTE = 267,
    OL_LT = 268,
    OL_LTE = 269,
    OL_LSHIFT = 270,
    OL_RSHIFT = 271,
    OL_PLUS = 272,
    OL_MINUS = 273,
    OL_TIMES = 274,
    OL_DIVIDE = 275,
    OL_MODULUS = 276,
    OL_NOT = 277,
    OL_IN = 278,
    OL_ID = 279,
    OL_ASSIGN = 280,
    OL_AT = 281,
    OL_NAME = 282,
    OL_COMMA = 283,
    OL_DOT = 284,
    OL_EOF = 285,
    OL_IF = 286,
    OL_STRING = 287,
    OL_VALUE = 288,
    OL_VAR = 289,
    OL_AGGFUNCNAME = 290,
    OL_FUNCTION = 291,
    OL_NULL = 292,
    OL_RPAR = 293,
    OL_LPAR = 294,
    OL_LSQUB = 295,
    OL_RSQUB = 296,
    OL_LCURB = 297,
    OL_RCURB = 298,
    OL_COLON = 299,
    OL_DEL = 300,
    OL_QUERY = 301,
    OL_MATERIALIZE = 302,
    OL_KEYS = 303,
    OL_SAYS = 304,
    OL_ENCRYPTS = 305,
    OL_CONTEXT = 306,
    OL_WATCH = 307,
    OL_WATCHFINE = 308,
    OL_STAGE = 309,
    OL_TRACE = 310,
    OL_TRACETABLE = 311
  };
#endif
/* Tokens.  */
#define OL_OR 258
#define OL_AND 259
#define OL_BITOR 260
#define OL_BITXOR 261
#define OL_BITAND 262
#define OL_BITNOT 263
#define OL_EQ 264
#define OL_NEQ 265
#define OL_GT 266
#define OL_GTE 267
#define OL_LT 268
#define OL_LTE 269
#define OL_LSHIFT 270
#define OL_RSHIFT 271
#define OL_PLUS 272
#define OL_MINUS 273
#define OL_TIMES 274
#define OL_DIVIDE 275
#define OL_MODULUS 276
#define OL_NOT 277
#define OL_IN 278
#define OL_ID 279
#define OL_ASSIGN 280
#define OL_AT 281
#define OL_NAME 282
#define OL_COMMA 283
#define OL_DOT 284
#define OL_EOF 285
#define OL_IF 286
#define OL_STRING 287
#define OL_VALUE 288
#define OL_VAR 289
#define OL_AGGFUNCNAME 290
#define OL_FUNCTION 291
#define OL_NULL 292
#define OL_RPAR 293
#define OL_LPAR 294
#define OL_LSQUB 295
#define OL_RSQUB 296
#define OL_LCURB 297
#define OL_RCURB 298
#define OL_COLON 299
#define OL_DEL 300
#define OL_QUERY 301
#define OL_MATERIALIZE 302
#define OL_KEYS 303
#define OL_SAYS 304
#define OL_ENCRYPTS 305
#define OL_CONTEXT 306
#define OL_WATCH 307
#define OL_WATCHFINE 308
#define OL_STAGE 309
#define OL_TRACE 310
#define OL_TRACETABLE 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 96 "ol-parser.y" /* yacc.c:1909  */


  ns3::rapidnet_compiler::ParseBool::Operator  u_boper;
  ns3::rapidnet_compiler::ParseMath::Operator  u_moper;
  const char*                                   u_aoper;
  ns3::rapidnet_compiler::ParseTermList        *u_termlist;
  ns3::rapidnet_compiler::ParseTerm            *u_term;
  ns3::rapidnet_compiler::ParseFunctorName     *u_functorname;
  ns3::rapidnet_compiler::ParseExprList        *u_exprlist;
  ns3::rapidnet_compiler::ParseExprListList    *u_exprlistlist;
  ns3::rapidnet_compiler::ParseExpr            *v;
  ns3::rapidnet_compiler::ParseAggTerm         *u_aggterm;
  ns3::rapidnet_compiler::ParseKey             *u_key;
  ns3::rapidnet_compiler::ParseRule            *u_rule;

#line 182 "ol-parser.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ol_parser_parse (ns3::rapidnet_compiler::OlContext *ctxt);

#endif /* !YY_OL_PARSER_OL_PARSER_HH_INCLUDED  */
