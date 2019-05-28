%{
#include <stdio.h>
#include <string.h>

%}
%union{
	char* s;
	float d;
	int i;
	char c;
}
/* keywords */
%token BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE
%token INTEGER REAL ID ARTH
%type<s> BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE ID type identifier_list init expr arrinit arrinit_expr arth
%type<i> INTEGER
%type<d> REAL
%%
readin		: { /*do nothiong*/ }
			| readin declaration { /*do nothiong*/ }
;
declaration	: type identifier_list ';' { printf("%s %s ;",$1,$2);}
			| STATIC type identifier_list ';' { printf("static %s %s ;",$2,$3);}
;
type		: BOOLEAN {$$ = $1;} | CHAR {$$ = $1;} | INT {$$ = $1; } | FLOAT {$$ = $1;} | STRING {$$ = $1;}
;
identifier_list : identifier_list ID { $$ = $2; }
				| identifier_list ID init {
					$$ = (char*)malloc(sizeof(char)*100);
					sprintf($$,"%s %s",$2,$3);
				}
				| identifier_list ID init ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*100);
					sprintf($$,"%s %s, %s",$2,$3,$5);
				}
				| identifier_list ID ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*100);
					sprintf($$,"%s, %s",$2,$4);
				}
				| identifier_list arrinit { $$ = $2; }
				| identifier_list arrinit ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*800);
					sprintf($$,"%s, %s",$2,$4);
				}
				| {/*do nothing*/}
;
init			: '=' expr { 
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"= %s",$2);
				}
;
arrinit			: '[' ']' ID {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"[] %s",$3);
				}
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"%s[%d]",$1,$3);
				}
				| '*' ID {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"* %s",$2);
				}
				| '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"[%d]",$2);
				}
				| '[' ']' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"[] %s = new %s[%d]",$3,$6,$8);
				}
				| '*' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"*%s = new %s[%d]",$2,$5,$7);
				}
				|  ID '[' INTEGER ']' '=' '{' arrinit_expr '}' {
					$$ = (char*)malloc(sizeof(char)*800);					
					sprintf($$,"%s[%d] = {%s}",$1,$3,$7);
				}
				|  ID '[' ']' '=' '{' arrinit_expr '}' {
					$$ = (char*)malloc(sizeof(char)*800);					
					sprintf($$,"%s[] = {%s}",$1,$6);
				}
;
arrinit_expr	: expr { $$ = $1; }
				| expr ',' arrinit_expr {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"%s,%s",$1,$3);
				}
;
expr			: INTEGER {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"%d",$1);
				}
				| REAL {
					$$ = (char*)malloc(sizeof(char)*100);					
					sprintf($$,"%g",$1);
				}
				| INTEGER arth expr {
					/*zero divisor*/
					if($2[0]=='/' && $3[0]=='0') printf("zero divisor\n");
					$$ = (char*)malloc(sizeof(char)*100);
					sprintf($$,"%d %s %s",$1,$2,$3);
				}
				| REAL arth expr {
					/*zero divisor*/
					if($2[0]=='/' && $3[0]=='0') printf("zero divisor\n");
					$$ = (char*)malloc(sizeof(char)*100);
					sprintf($$,"%g %s %s",$1,$2,$3);
				}
;
arth			: '+' { $$ = "+"; }
				| '-' { $$ = "-"; }
				| '*' { $$ = "*"; }
				| '/' { $$ = "/"; }
				| '%' { $$ = '%'; }
;
%%
int main(){
	yyparse();
	return 0;
}
