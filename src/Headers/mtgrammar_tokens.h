/*
** Inserted at beginning of c files generated by bison
** REMEMBER:  Change bison.reset too.
*/

/*@-allmacros@*/
/*@+boolint@*/
/*@+charint@*/
/*@-macroparams@*/
/*@-macroundef@*/
/*@-unreachable@*/
/*@-macrospec@*/
/*@-varuse@*/
/*@+ignorequals@*/
/*@-macrostmt@*/
/*@-noeffect@*/
/*@-shadow@*/
/*@-exitarg@*/
/*@-macroredef@*/
/*@-uniondef@*/
/*@-compdef@*/
/*@-matchfields@*/
/*@-exportlocal@*/
/*@-evalorderuncon@*/
/*@-exportheader@*/
/*@-typeuse@*/
/*@-redecl@*/
/*@-redef@*/
/*@-noparams@*/
/*@-ansireserved@*/
/*@-fielduse@*/
/*@-ifblock@*/
/*@-elseifcomplete@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-branchstate@*/
/*@-readonlytrans@*/
/*@-namechecks@*/
/*@-usedef@*/
/*@-systemunrecog@*/
/*@-dependenttrans@*/
/*@-unqualifiedtrans@*/
/*@-nullassign@*/
/*@-nullpass@*/
/*@-nullptrarith*/
/*@-usereleased@*/
/*@-declundef@*/

/*drl added 11/27/2001*/
/*@-bounds@*/

/*drl added 12/11/2002*/
/*@-type@*/

/* < end of bison.head > */

/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MT_BADTOK = 258,
     MT_END = 259,
     MT_STATE = 260,
     MT_GLOBAL = 261,
     MT_CONTEXT = 262,
     MT_ONEOF = 263,
     MT_DEFAULTS = 264,
     MT_DEFAULT = 265,
     MT_REFERENCE = 266,
     MT_PARAMETER = 267,
     MT_RESULT = 268,
     MT_CLAUSE = 269,
     MT_LITERAL = 270,
     MT_NULL = 271,
     MT_ANNOTATIONS = 272,
     MT_ARROW = 273,
     MT_MERGE = 274,
     MT_TRANSFERS = 275,
     MT_PRECONDITIONS = 276,
     MT_POSTCONDITIONS = 277,
     MT_LOSEREFERENCE = 278,
     MT_AS = 279,
     MT_ERROR = 280,
     MT_PLUS = 281,
     MT_STAR = 282,
     MT_BAR = 283,
     MT_LPAREN = 284,
     MT_RPAREN = 285,
     MT_LBRACKET = 286,
     MT_RBRACKET = 287,
     MT_LBRACE = 288,
     MT_RBRACE = 289,
     MT_COMMA = 290,
     MT_CHAR = 291,
     MT_INT = 292,
     MT_FLOAT = 293,
     MT_DOUBLE = 294,
     MT_VOID = 295,
     MT_ANYTYPE = 296,
     MT_INTEGRALTYPE = 297,
     MT_UNSIGNEDINTEGRALTYPE = 298,
     MT_SIGNEDINTEGRALTYPE = 299,
     MT_CONST = 300,
     MT_VOLATILE = 301,
     MT_RESTRICT = 302,
     MT_STRINGLIT = 303,
     MT_IDENT = 304
   };
#endif
#define MT_BADTOK 258
#define MT_END 259
#define MT_STATE 260
#define MT_GLOBAL 261
#define MT_CONTEXT 262
#define MT_ONEOF 263
#define MT_DEFAULTS 264
#define MT_DEFAULT 265
#define MT_REFERENCE 266
#define MT_PARAMETER 267
#define MT_RESULT 268
#define MT_CLAUSE 269
#define MT_LITERAL 270
#define MT_NULL 271
#define MT_ANNOTATIONS 272
#define MT_ARROW 273
#define MT_MERGE 274
#define MT_TRANSFERS 275
#define MT_PRECONDITIONS 276
#define MT_POSTCONDITIONS 277
#define MT_LOSEREFERENCE 278
#define MT_AS 279
#define MT_ERROR 280
#define MT_PLUS 281
#define MT_STAR 282
#define MT_BAR 283
#define MT_LPAREN 284
#define MT_RPAREN 285
#define MT_LBRACKET 286
#define MT_RBRACKET 287
#define MT_LBRACE 288
#define MT_RBRACE 289
#define MT_COMMA 290
#define MT_CHAR 291
#define MT_INT 292
#define MT_FLOAT 293
#define MT_DOUBLE 294
#define MT_VOID 295
#define MT_ANYTYPE 296
#define MT_INTEGRALTYPE 297
#define MT_UNSIGNEDINTEGRALTYPE 298
#define MT_SIGNEDINTEGRALTYPE 299
#define MT_CONST 300
#define MT_VOLATILE 301
#define MT_RESTRICT 302
#define MT_STRINGLIT 303
#define MT_IDENT 304




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)

typedef union YYSTYPE {
  mttok tok; 
  mtDeclarationNode mtdecl;
  mtDeclarationPiece mtpiece;
  mtDeclarationPieces mtpieces;
  mtContextNode mtcontext;
  mtValuesNode mtvalues;
  mtDefaultsNode mtdefaults;
  mtDefaultsDeclList mtdeflist;
  mtAnnotationsNode mtannotations;
  mtAnnotationList mtannotlist;
  mtAnnotationDecl mtannotdecl;
  mtMergeNode mtmerge;
  mtMergeItem mtmergeitem;
  mtMergeClauseList mtmergeclauselist;
  mtMergeClause mtmergeclause;
  mtTransferClauseList mttransferclauselist;
  mtTransferClause mttransferclause;
  mtTransferAction mttransferaction;
  mtLoseReferenceList mtlosereferencelist;
  mtLoseReference mtlosereference;
  pointers pointers;
  /*@only@*/ cstringList cstringlist;
  ctype ctyp;
  /*@only@*/ qtype qtyp;
  qual qual;
  qualList quals;
} YYSTYPE;
/* Line 1240 of yacc.c.  */

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif





/*
** Resets all flags in bison.head
*/


/*@=allmacros@*/
/*@=boolint@*/
/*@=charint@*/
/*@=macroparams@*/
/*@=macroundef@*/
/*@=unreachable@*/
/*@=macrospec@*/
/*@=varuse@*/
/*@=ignorequals@*/
/*@=macrostmt@*/
/*@=noeffect@*/
/*@=shadow@*/
/*@=exitarg@*/
/*@=macroredef@*/
/*@=uniondef@*/
/*@=compdef@*/
/*@=matchfields@*/
/*@=exportlocal@*/
/*@=evalorderuncon@*/
/*@=exportheader@*/
/*@=typeuse@*/
/*@=redecl@*/
/*@=redef@*/
/*@=noparams@*/
/*@=ansireserved@*/
/*@=fielduse@*/
/*@=ifblock@*/
/*@=elseifcomplete@*/
/*@=whileblock@*/
/*@=forblock@*/
/*@=branchstate@*/
/*@=readonlytrans@*/
/*@=namechecks@*/
/*@=usedef@*/
/*@=systemunrecog@*/
/*@=dependenttrans@*/
/*@=unqualifiedtrans@*/
/*@=declundef@*/


/*drl added 11/27/2001*/
/*@=bounds@*/

/*drl added 12/11/2002*/
/*@=type@*/
