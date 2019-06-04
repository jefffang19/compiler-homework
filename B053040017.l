%{
/* this is my compiler lab 1 by FANG */
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
static int current_line = 0;
/*void print_lineno();*/ /* check if need to print Line no:*/
static int charcnt = 0;

int str_eql(char const * str1, char const * str2){
	if(strcmp(str1,str2) == 0) return 1;
	else return 0;
}
%}

%option yylineno
eol \r|\r\n|\n
emptyline ^\n
comment "/*"[^*]*[*]+([^/][^*]*[*]+)*"/"|"//".*|"//".*[\r][\n]
keyword boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|final|finally|float|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|String|switch|this|true|try|void|while|read
symbol [.,:;\(\)\[\]\{\}]
operator [+\-*/%=<>!]|"++"|"--"|<=|>=|==|!=|&&|"||"
integer [0-9]+
real [0-9]+\.[0-9]+("e"[+-]{0,1}[0-9]+){0,1}|[0-9]+E[+-]{0,1}[0-9]+
space [ \t]
string \"(\\.|[^\n"\\])*\"
ID [^.,:;\(\)\[\]\{\}+\-*/%=<>! \t\r\n]+
%%
{comment}		{ /*printf("%s\n",yytext);*/}
{symbol}		{
	/*print_lineno();*/
	charcnt+=yyleng;
	switch(yytext[0]){
		case '.': return('.');
		case ',': return(',');
		case ':': return(':');
		case ';': return(';');
		case '(': return('(');
		case ')': return(')');
		case '[': return('[');
		case ']': return(']');
		case '{': return('{');
		case '}': return('}');
	}
}
{space} 		{ ++charcnt; }
{emptyline} 	{ return(EMPTYLINE); }
{eol}			{ charcnt = 0; }
{operator} 		{
	/*print_lineno();*/
	charcnt+=yyleng;
	if(str_eql(yytext,"+")) return('+');
	else if(str_eql(yytext,"-")) return('-');
	else if(str_eql(yytext,"*")) return('*');
	else if(str_eql(yytext,"%")) return('%');
	else if(str_eql(yytext,"/")) return('/');
	else if(str_eql(yytext,"=")) return('=');
	else if(str_eql(yytext,"<")) return('<');
	else if(str_eql(yytext,">")) return('>');
	else if(str_eql(yytext,"!")) return('!');
	else{
		yylval.s = (char*)malloc(sizeof(char)*yyleng);
		strcpy(yylval.s,yytext);
		if(str_eql(yytext,"++")) return(PPLUS);
		else if(str_eql(yytext,"--")) return(MMINUS);
		else if(str_eql(yytext,"<=")) return(SEQUAL);
		else if(str_eql(yytext,">=")) return(BEQUAL);
		else if(str_eql(yytext,"==")) return(EQUAL);
		else if(str_eql(yytext,"!=")) return(NEQUAL);
		else if(str_eql(yytext,"&&")) return(AND);
		else if(str_eql(yytext,"||")) return(OR);
	}	
}
{integer}		{
	/*print_lineno();*/
	charcnt+=yyleng;
	yylval.i = atoi(yytext);	
	return(INTEGER);
}
{real}			{
	/*print_lineno();*/
	charcnt+=yyleng;
	yylval.d = atof(yytext);	
	return(REAL);
}
{string}		{
	/*print_lineno();*/
	charcnt+=yyleng;
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);	
	return(STRING);
}
{keyword} 		{
	/*print_lineno();*/
	charcnt+=yyleng;
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);
	/* return the keyword to the token in parser */
	if(str_eql(yytext,"boolean")) return(BOOLEAN);
	else if(str_eql(yytext,"break")) return(BREAK);
	else if(str_eql(yytext,"byte")) return(BYTE);
	else if(str_eql(yytext,"case")) return(CASE);
	else if(str_eql(yytext,"char")) return(CHAR);
	else if(str_eql(yytext,"catch")) return(CATCH);
	else if(str_eql(yytext,"class")) return(CLASS);
	else if(str_eql(yytext,"const")) return(CONST);
	else if(str_eql(yytext,"continue")) return(CONTINUE);
	else if(str_eql(yytext,"default")) return(DEFAULT);
	else if(str_eql(yytext,"do")) return(DO);
	else if(str_eql(yytext,"double")) return(DOUBLE);
	else if(str_eql(yytext,"else")) return(ELSE);
	else if(str_eql(yytext,"extends")) return(EXTENDS);
	else if(str_eql(yytext,"false")) return(FALSE2);
	else if(str_eql(yytext,"final")) return(FINAL);
	else if(str_eql(yytext,"finally")) return(FINALLY);
	else if(str_eql(yytext,"float")) return(FLOAT);
	else if(str_eql(yytext,"for")) return(FOR);
	else if(str_eql(yytext,"if")) return(IF);
	else if(str_eql(yytext,"implements")) return(IMPLEMENTS);
	else if(str_eql(yytext,"int")) return(INT);
	else if(str_eql(yytext,"long")) return(LONG);
	else if(str_eql(yytext,"main")) return(MAIN);
	else if(str_eql(yytext,"new")) return(NEW);
	else if(str_eql(yytext,"print")) return(PRINT);
	else if(str_eql(yytext,"private")) return(PRIVATE);
	else if(str_eql(yytext,"protected")) return(PROTECTED);
	else if(str_eql(yytext,"public")) return(PUBLIC);
	else if(str_eql(yytext,"return")) return(RETURN);
	else if(str_eql(yytext,"short")) return(SHORT);
	else if(str_eql(yytext,"static")) return(STATIC);
	else if(str_eql(yytext,"String")) return(STRING);
	else if(str_eql(yytext,"switch")) return(SWITCH);
	else if(str_eql(yytext,"this")) return(THIS);
	else if(str_eql(yytext,"true")) return(TRUE2);
	else if(str_eql(yytext,"try")) return(TRY);
	else if(str_eql(yytext,"void")) return(VOID);
	else if(str_eql(yytext,"while")) return(WHILE);
	else if(str_eql(yytext,"read")) return(READ);
}
{ID}			{
	/*print_lineno();*/
	charcnt+=yyleng;
	yylval.s = (char*)malloc(sizeof(char)*yyleng);
	strcpy(yylval.s,yytext);
	return(ID);
}
%%
/*
void print_lineno(){
	if(current_line!=yylineno){
		printf("Line %d: ",yylineno);
		current_line = yylineno;
	}
}*/
