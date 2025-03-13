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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    STRING = 260,                  /* STRING  */
    BREAK = 261,                   /* BREAK  */
    CHAR = 262,                    /* CHAR  */
    CONTINUE = 263,                /* CONTINUE  */
    DO = 264,                      /* DO  */
    ELSE = 265,                    /* ELSE  */
    FOR = 266,                     /* FOR  */
    GOTO = 267,                    /* GOTO  */
    IF = 268,                      /* IF  */
    INT = 269,                     /* INT  */
    LONG = 270,                    /* LONG  */
    RETURN = 271,                  /* RETURN  */
    SHORT = 272,                   /* SHORT  */
    SIGNED = 273,                  /* SIGNED  */
    UNSIGNED = 274,                /* UNSIGNED  */
    VOID = 275,                    /* VOID  */
    WHILE = 276,                   /* WHILE  */
    LEFT_PAREN = 277,              /* LEFT_PAREN  */
    RIGHT_PAREN = 278,             /* RIGHT_PAREN  */
    LEFT_SQUARE = 279,             /* LEFT_SQUARE  */
    RIGHT_SQUARE = 280,            /* RIGHT_SQUARE  */
    LEFT_CURLY = 281,              /* LEFT_CURLY  */
    RIGHT_CURLY = 282,             /* RIGHT_CURLY  */
    AMPERSAND = 283,               /* AMPERSAND  */
    ASTERISK = 284,                /* ASTERISK  */
    CARET = 285,                   /* CARET  */
    COLON = 286,                   /* COLON  */
    COMMA = 287,                   /* COMMA  */
    EQUAL = 288,                   /* EQUAL  */
    EXCLAMATION = 289,             /* EXCLAMATION  */
    GREATER = 290,                 /* GREATER  */
    LESS = 291,                    /* LESS  */
    MINUS = 292,                   /* MINUS  */
    PERCENT = 293,                 /* PERCENT  */
    PLUS = 294,                    /* PLUS  */
    SEMICOLON = 295,               /* SEMICOLON  */
    SLASH = 296,                   /* SLASH  */
    QUESTION = 297,                /* QUESTION  */
    TILDE = 298,                   /* TILDE  */
    VBAR = 299,                    /* VBAR  */
    AMPERSAND_AMPERSAND = 300,     /* AMPERSAND_AMPERSAND  */
    AMPERSAND_EQUAL = 301,         /* AMPERSAND_EQUAL  */
    ASTERISK_EQUAL = 302,          /* ASTERISK_EQUAL  */
    CARET_EQUAL = 303,             /* CARET_EQUAL  */
    EQUAL_EQUAL = 304,             /* EQUAL_EQUAL  */
    EXCLAMATION_EQUAL = 305,       /* EXCLAMATION_EQUAL  */
    GREATER_EQUAL = 306,           /* GREATER_EQUAL  */
    GREATER_GREATER = 307,         /* GREATER_GREATER  */
    GREATER_GREATER_EQUAL = 308,   /* GREATER_GREATER_EQUAL  */
    LESS_EQUAL = 309,              /* LESS_EQUAL  */
    LESS_LESS = 310,               /* LESS_LESS  */
    LESS_LESS_EQUAL = 311,         /* LESS_LESS_EQUAL  */
    MINUS_EQUAL = 312,             /* MINUS_EQUAL  */
    MINUS_MINUS = 313,             /* MINUS_MINUS  */
    PERCENT_EQUAL = 314,           /* PERCENT_EQUAL  */
    PLUS_EQUAL = 315,              /* PLUS_EQUAL  */
    PLUS_PLUS = 316,               /* PLUS_PLUS  */
    SLASH_EQUAL = 317,             /* SLASH_EQUAL  */
    VBAR_EQUAL = 318,              /* VBAR_EQUAL  */
    VBAR_VBAR = 319                /* VBAR_VBAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int yyparse (YYSTYPE *root, int *error_count, yyscan_t scanner);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
