%{
#include <stdio.h>
#include <string.h>
#define returnDollarLEN 100
%}
%union{
	char* s;
	float d;
	int i;
}
/* keywords */
%token BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE
%token INTEGER REAL ID PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR
%type<s> BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE ID type identifier_list assign expr arrinit arrinit_expr method_modifier method_declr compound function func_parem declaration method_declr_parem class_declr class_body use_var PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR prefixOp postfixOp const_expr term factor
%type<i> INTEGER
%type<d> REAL
%%
readin		: { /*empty*/ }
			| readin declaration { printf("%s",$2); }
			| readin method_declr { printf("%s",$2); }
			| readin class_declr { printf("%s",$2); }
			| readin use_var ';' { /* this include calling function*/
				printf("%s ;",$2);
			}
;
declaration	: type identifier_list ';' {
				$$ = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf($$,"%s %s ;",$1,$2);
			}
			| STATIC type identifier_list ';' {
				$$ = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf($$,"static %s %s ;",$2,$3);
			}
;
class_declr	: CLASS ID '{' class_body '}' {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf($$,"%s %s {\n%s\n}",$1,$2,$4);
			}
;
class_body	: declaration {
				$$ = $1;
			}
			| method_declr {
				$$ = $1;
			}
			| declaration class_body {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf($$,"%s\n%s",$1,$2);
			}
			| method_declr class_body {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf($$,"%s\n%s",$1,$2);
			}
;
method_declr: type ID '(' method_declr_parem ')' '{' compound '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s(%s){\n%s\n}",$1,$2,$4,$7);
			}
			| method_modifier type ID '(' method_declr_parem ')' '{' compound '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s(%s){\n%s\n}",$1,$2,$3,$5,$8);
			}
			| type ID '('  ')' '{' compound '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s(){\n%s\n}",$1,$2,$6);
			}
			| method_modifier type ID '(' ')' '{' compound '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s(){\n%s\n}",$1,$2,$3,$7);
			}
			| type ID '(' method_declr_parem ')' '{' '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s(%s){ }",$1,$2,$4);
			}
			| method_modifier type ID '(' method_declr_parem ')' '{' '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s(%s){ }",$1,$2,$3,$5);
			}
			| type ID '('  ')' '{' '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s(){ }",$1,$2);
			}
			| method_modifier type ID '(' ')' '{' '}' { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s(){ }",$1,$2,$3);
			}
			| type ID '(' method_declr_parem ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s(%s) ;",$1,$2,$4);
			}
			| type ID '(' ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s() ;",$1,$2);
			}
			| method_modifier type ID '(' method_declr_parem ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s(%s) ;",$1,$2,$3,$5);
			}
			| method_modifier type ID '(' ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				sprintf($$,"%s %s %s() ;",$1,$2,$3);
			}
;
method_declr_parem : type ID {
						$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf($$,"%s %s",$1,$2);
					}
					| type ID ',' method_declr_parem {
						$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf($$,"%s %s, %s",$1,$2,$4);
					}
;
type		: BOOLEAN {$$ = $1;} | CHAR {$$ = $1;} | INT {$$ = $1; } | FLOAT {$$ = $1;} | STRING {$$ = $1;} | VOID { $$ = $1; }
;
use_var			: ID assign	{
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
				}
				| expr {
					$$ = $1;
				}
;
method_modifier	: PRIVATE { $$ = $1; }
				| PROTECTED { $$ = $1; }
				| PUBLIC { $$ = $1; }
;
identifier_list : ID { $$ = $1; }
				| ID assign {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
				}
				| ID assign ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s, %s",$1,$2,$4);
				}
				| ID ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s, %s",$1,$3);
				}
				| arrinit { $$ = $1; }
				| arrinit ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf($$,"%s, %s",$1,$3);
				}
;	
assign			: '=' expr { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"= %s",$2);
				}
;
arrinit			: '[' ']' ID {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"[] %s",$3);
				}
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%s[%d]",$1,$3);
				}
				| '*' ID {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"* %s",$2);
				}
				| '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"[%d]",$2);
				}
				| '[' ']' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"[] %s = new %s[%d]",$3,$6,$8);
				}
				| '*' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"*%s = new %s[%d]",$2,$5,$7);
				}
				|  ID '[' INTEGER ']' '=' '{' arrinit_expr '}' {
					$$ = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf($$,"%s[%d] = {%s}",$1,$3,$7);
				}
				|  ID '[' ']' '=' '{' arrinit_expr '}' {
					$$ = (char*)malloc(sizeof(char)*8*returnDollarLEN);					
					sprintf($$,"%s[] = {%s}",$1,$6);
				}
;
arrinit_expr	: expr { $$ = $1; }
				| expr ',' arrinit_expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%s,%s",$1,$3);
				}
;
expr			: term { $$ = $1;}
				| expr '+' term {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s + %s",$1,$3);
				}
				| expr '-' term {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s - %s",$1,$3);
				}
;
term			: factor { $$ = $1; }
				| factor '*' factor {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s * %s",$1,$3);
				}
				| factor '/' factor {
					/*zero divisor*/
					if($3[0]=='0') printf("zero divisor\n");
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s / %s",$1,$3);
				}
				| factor '%' factor {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s \% %s",$1,$3);
				}
;
factor			: ID { $$ = $1; }
				| const_expr { $$ = $1;}
				| '(' expr ')' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"(%s)",$2);
				}
				| prefixOp {
					$$ = $1;
				}
				| postfixOp {
					$$ = $1;
				}
				| function { $$ = $1; }
;
prefixOp		: PPLUS ID {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"++%s",$2);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
				| MMINUS ID {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"--%s",$2);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
				| '+' ID {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"+%s",$2);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
				| '-' ID {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"-%s",$2); printf("debug %s",$$);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
;
postfixOp		: ID PPLUS {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s++",$1);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
				| ID MMINUS {
					/* need implement ID = function or variable */
					/* if ID is variable */
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s--",$1);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
;

const_expr		: INTEGER {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%d",$1); 
				}
				| REAL {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%g",$1);
				}
;
compound		: declaration {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s",$1);
				}
				| use_var ';' {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s ;",$1);
				}
				| declaration compound {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s\n%s",$1,$2);
				}
				| use_var ';' compound {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s ;\n%s",$1,$3);
				}
;
function		: ID '(' ')' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s()",$1);
				}
				| ID '(' func_parem ')' {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s(%s)",$1,$3);
				}
;
func_parem		: ID { $$ = $1; }
				| ID ',' func_parem {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s, %s",$1,$3);
				}
				| function { $$ = $1; }
				| function ',' func_parem {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s, %s",$1,$3);
				}
;
%%
int main(){
	yyparse();
	return 0;
}
