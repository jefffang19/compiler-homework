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
%token BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE READ
%token INTEGER REAL ID PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR 
%type<s> BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE ID type identifier_list assign expr arrinit arrinit_expr method_modifier method_declr compound function func_parem declaration method_declr_parem class_declr class_body simple PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR prefixOp postfixOp const_expr term factor name READ boolean_expr conditional infixop forinitop forupdate for_parem loop
%type<i> INTEGER
%type<d> REAL
%%
readin		: readin declaration ';'{ printf("%s ;",$2); }
			| readin method_declr { printf("%s",$2); }
			| readin class_declr { printf("%s",$2); }
			| readin simple { printf("%s",$2); }
			| readin conditional { printf("%s",$2); }
			| readin boolean_expr ';' { printf("%s ;",$2); }
			| readin loop { printf("%s",$2); }
			| { /*empty*/ }
;
declaration	: type identifier_list {
				$$ = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf($$,"%s %s",$1,$2);
			}
			| STATIC type identifier_list {
				$$ = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf($$,"static %s %s",$2,$3);
			}
;
class_declr	: CLASS ID '{' class_body '}' {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf($$,"%s %s {\n%s\n}",$1,$2,$4);
			}
;
class_body	: declaration ';' {
				$$ = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf($$,"%s ;",$1);
			}
			| method_declr {
				$$ = $1;
			}
			| declaration ';' class_body {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf($$,"%s ;\n%s",$1,$3);
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
method_modifier	: PRIVATE { $$ = $1; }
				| PROTECTED { $$ = $1; }
				| PUBLIC { $$ = $1; }
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
conditional		: IF '(' boolean_expr ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf($$,"%s(%s) %s",$1,$3,$5); 
				}
				| IF '(' boolean_expr ')' '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}",$1,$3,$6);
				}
				| IF '(' boolean_expr ')' simple ELSE simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s %s",$1,$3,$5,$6,$7);
				}
				| IF '(' boolean_expr ')' simple ELSE '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s {\n%s\n}",$1,$3,$5,$6,$8);
				}
				| IF '(' boolean_expr ')' '{' compound '}' ELSE simple {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s %s",$1,$3,$6,$8,$9);
				}
				| IF '(' boolean_expr ')' '{' compound '}' ELSE '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s {\n%s\n}",$1,$3,$6,$8,$10);
				}
				| IF '(' boolean_expr ')' simple ELSE conditional {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s %s",$1,$3,$5,$6,$7);
				}
				| IF '(' boolean_expr ')' '{' compound '}' ELSE conditional {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s %s",$1,$3,$6,$8,$9);
				}
;
boolean_expr	: expr { $$ = $1;/*not full implement yet*/ }
				| expr infixop expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%s %s %s",$1,$2,$3);
				}
;
infixop			: EQUAL { $$ = $1; }
				| NEQUAL { $$ = $1; }
				| '<' { $$ = "<"; }
				| '>' { $$ = ">"; }
				| SEQUAL { $$ = $1; }
				| BEQUAL { $$ = $1; }
;
loop		: WHILE '(' boolean_expr ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ( %s ) %s",$1,$3,$5);
			}
			| WHILE '(' boolean_expr ')' '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s ( %s ) {\n%s\n}",$1,$3,$6);
			}
			| WHILE '(' ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ( ) %s ;",$1,$4);
			}
			| WHILE '(' ')' '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf($$,"%s ( ) {\n%s\n}",$1,$5);
			}
			| FOR '(' for_parem ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ( %s ) %s ;",$1,$3,$5);
			}
			| FOR '(' for_parem ')' '{' compound '}' {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s ( %s ) {\n%s\n}",$1,$3,$6);
			}
;
for_parem	: forinitop ';' boolean_expr ';' forupdate {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ; %s ; %s",$1,$3,$5);
			}
			| ';' boolean_expr ';' forupdate {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$," ; %s ; %s",$2,$4);
			}
			| forinitop ';' ';' forupdate {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ; ; %s",$1,$4);
			}
			| forinitop ';' boolean_expr ';' {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ; %s ;",$1,$3);
			}
			| ';' ';' forupdate {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$," ; ; %s ",$3);
			}
			| ';' boolean_expr ';' {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$," ; %s ; ",$2);
			}
			| forinitop ';' ';' {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$," %s ; ;",$1);
			}
			| ';' ';' {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$," ; ; ");
			}
;
forinitop	: declaration { $$ = $1; }
			| ID assign { $$ = $1; }
			| declaration ',' forinitop {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s , %s",$1,$3);
			}
			| ID assign ',' forinitop {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s %s , %s",$1,$2,$4);
			}
;
forupdate	: postfixOp { $$ = $1; }
			| PPLUS ID {
				$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
				sprintf($$,"%s %s",$1,$2);
			}
			| MMINUS ID {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
			}
			| ID assign {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
			}
;
type		: BOOLEAN {$$ = $1;} | CHAR {$$ = $1;} | INT {$$ = $1; } | FLOAT {$$ = $1;} | STRING {$$ = $1;} | VOID { $$ = $1; }
;
simple			: name assign ';' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s ;",$1,$2);
				}
				| PRINT '(' expr ')' ';' { 
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s(%s) ;",$1,$3);
				}
				| READ '(' name ')' ';' { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s(%s) ;",$1,$3);
				}
				| name PPLUS ';' { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s%s ;",$1,$2);
				}
				| name MMINUS ';' { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s%s ;",$1,$2);
				}
				| expr ';' { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s ;",$1);
				}
				| ';' { $$ = ";"; }
;
name			: ID { $$ = $1; printf("debug %s",$$);}
				| ID '.' ID { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s.%s",$1,$3);
				}
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s[%d]",$1,$3);
				}
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
				| factor '*' term {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s * %s",$1,$3);
				}
				| factor '/' term {
					/*zero divisor*/
					if($3[0]=='0') fprintf(stderr,"zero divisor\n");
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s / %s",$1,$3);
				}
				| factor '%' term {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s \% %s",$1,$3);
				}
;
factor			: ID { $$ = $1; }
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s[%d]",$1,$3);
				}
				| const_expr { $$ = $1;}
				| '(' expr ')' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"(%s)",$2);
				}
				| prefixOp {
					$$ = $1;
				}
				| postfixOp {
					$$ = $1;;
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
					sprintf($$,"-%s",$2);
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
				| '+' const_expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"-%s",$2);
				}
				| '-' const_expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"-%s",$2);
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
compound		: declaration ';' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s ;",$1);
				}
				| simple { $$ = $1; }
				| conditional { $$ = $1; }
				| declaration ';' compound {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s\n%s",$1,$3);
				}
				| simple compound {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s ;\n%s",$1,$2);
				}
				| conditional compound {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s\n%s",$1,$2);
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
func_parem		: expr { $$ = $1; }
				| expr ',' func_parem {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s, %s",$1,$3);
				}
;
%%
int main(){
	yyparse();
	return 0;
}
