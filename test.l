%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
%option yylineno
static static
boolean boolean
char char
int int
float float
String String
id [^ ,;=\n]+
semi_col ;
comma ,
equal =
eol \n
space [ \t]
number [0-9]+
%%
{static} { return(STATIC); }
{boolean} { 
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);	
	return(BOOLEAN); }
{char} { 
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);	
	return(CHAR); }
{int} {
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);
	return(INT); }
{float} { 
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);	
	return(FLOAT); }
{String} { 
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);	
	return(STRING); }
{number} {
	yylval.i = atoi(yytext);	
	return(NUMBER);
}
{id} { 
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);
	return(ID); }
{semi_col} { return(';'); }
{comma} { return(','); }
{equal} { return('='); }
{eol} { printf("\nLine %d:\t",yylineno); }
{space} { /* empty */ }
%%

