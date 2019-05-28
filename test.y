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
%token INTEGER REAL ID
%type<s> BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE ID type identifier_list
%type<i> INTEGER expr
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
				| identifier_list ID '=' expr {
					$$ = (char*)malloc(sizeof(char)*50);
					sprintf($$,"%s = %d",$2,$4); /* return (for example) x = 1 */
				}
				| identifier_list ID '=' expr ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*50);
					sprintf($$,"%s = %d , %s",$2,$4,$6); /* return (for example) x = 1 */
				}
				| {/*do nothing*/}
;
expr			: INTEGER { $$ = $1; }
;
%%
int main(){
	yyparse();
	return 0;
}
