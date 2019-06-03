%{
#include <stdio.h>
#include <string.h>
#define returnDollarLEN 100
#define IDLISTSIZE 100
#define IDLEN 100
#define STACKSIZE 50
struct st_func{
	int size;
	char scope_name[IDLEN];
	char idlist[IDLISTSIZE][IDLEN];
};
typedef struct st_func ST;

struct mystack{
	int size;
	ST list[STACKSIZE];
}table;
typedef struct mystack STACK;

void into_scope(char str[]);
void add_id(char str[]);
void out_scope();
void print_current();
int check_sameid(char str[]);

int sem_def;
void yyerror(const char *str);

static int lineno = 1;

%}
%union{
	char* s;
	char c;
	float d;
	int i;
}
/* keywords */
%token BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE READ
%token INTEGER REAL ID PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR EMPTYLINE
%type<s> BOOLEAN BREAK BYTE CASE CHAR CATCH CLASS CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTENDS FALSE2 FINAL FINALLY FLOAT FOR IF IMPLEMENTS INT LONG MAIN NEW PRINT PRIVATE PROTECTED PUBLIC RETURN SHORT STATIC STRING SWITCH THIS TRUE2 TRY VOID WHILE ID type identifier_list assign expr arrinit arrinit_expr method_modifier method_declr compound function func_parem declaration method_declr_parem class_declr class_body simple PPLUS MMINUS SEQUAL BEQUAL EQUAL NEQUAL AND OR prefixOp postfixOp const_expr term factor name READ boolean_expr conditional infixop forinitop forupdate for_parem loop func_return new_obj
%type<i> INTEGER
%type<d> REAL
%type<c> leftcurly rightcurly
%%
readin		: readin declaration ';'{ printf("%s ;\n",$2); }
			| readin method_declr { printf("%s\n",$2); }
			| readin class_declr { printf("%s\n",$2); }
			| readin new_obj { printf("%s ;\n",$2); }
			| readin simple { printf("%s\n",$2); }
			| readin conditional { printf("%s\n",$2); }
			| readin boolean_expr ';' { printf("%s ;\n",$2); }
			| readin loop { printf("%s\n",$2); }
			| readin EMPTYLINE { printf("LINE %d:\n",lineno++); }
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
			| FINAL type identifier_list {
				$$ = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf($$,"final %s %s",$2,$3);
			}
;
class_declr	: CLASS ID leftcurly class_body rightcurly {
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				if(check_sameid($2)) sprintf($$,"%s %s {\n>'%s' is a duplicate identifier\n%s\n}",$1,$2,$2,$4);
				else{ 
					add_id($2);
					sprintf($$,"%s %s {\n%s\n}",$1,$2,$4);
				}
			}
;
new_obj		: ID ID '=' NEW ID '(' ')' {
				/* check if class difined? */
				if(strcmp($1,$5)!=0) fprintf(stderr,"%s typed do not match with newed type %s",$2,$5);
				$$ = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf($$,"%s %s = new %s()",$1,$2,$5);
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
method_declr: type ID '(' method_declr_parem ')' leftcurly compound rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sprintf($$,"%s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",$1,$2,$4,$2,$7);
				else{
					add_id($2);
					sprintf($$,"%s %s(%s){\n%s\n}",$1,$2,$4,$7);
				}
			}
			| method_modifier type ID '(' method_declr_parem ')' leftcurly compound rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",$1,$2,$3,$5,$3,$8);
				else{
					add_id($3);
					sprintf($$,"%s %s %s(%s){\n%s\n}",$1,$2,$3,$5,$8);
				}
			}
			| type ID '('  ')' leftcurly compound rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sem_def = 1;
				else{
					add_id($2);
					sprintf($$,"%s %s(){\n%s\n}",$1,$2,$6);
				}
			}
			| method_modifier type ID '(' ')' leftcurly compound rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s(){\n>'%s' is a duplicate identifier\n%s\n}",$1,$2,$3,$3,$7);
				else{ 
					sprintf($$,"%s %s %s(){\n%s\n}",$1,$2,$3,$7);
 					add_id($3);
 				}
			}
			| type ID '(' method_declr_parem ')' leftcurly rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sprintf($$,"%s %s(%s){ }\n>'%s' is a duplicate identifier",$1,$2,$4,$2);
				else{ 
					sprintf($$,"%s %s(%s){ }",$1,$2,$4);
 					add_id($2);
 				}
			}
			| method_modifier type ID '(' method_declr_parem ')' leftcurly rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s(%s){ }\n>'%s' is a duplicate identifier",$1,$2,$3,$5,$3);
				else{ 
					sprintf($$,"%s %s %s(%s){ }",$1,$2,$3,$5);
 					add_id($3);
 				}
			}
			| type ID '('  ')' leftcurly rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sprintf($$,"%s %s(){ }\n>'%s' is a duplicate identifier",$1,$2,$2);
				else{ 
					sprintf($$,"%s %s(){ }",$1,$2);
					add_id($2);
				}
			}
			| method_modifier type ID '(' ')' leftcurly rightcurly { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s(){ }\n>'%s' is a duplicate identifier",$1,$2,$3,$3);
				else{ 
					sprintf($$,"%s %s %s(){ }",$1,$2,$3);
 					add_id($3);
 				}
			}
			| type ID '(' method_declr_parem ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sprintf($$,"%s %s(%s) ;\n>'%s' is a duplicate identifier",$1,$2,$4);
				else{ 
					sprintf($$,"%s %s(%s) ;",$1,$2,$4);
					add_id($2);
				}
			}
			| type ID '(' ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($2)) sprintf($$,"%s %s() ;\n>'%s' is a duplicate identifier",$1,$2,$2);
				else{ 
					sprintf($$,"%s %s() ;",$1,$2);
 					add_id($2);
 				}
			}
			| method_modifier type ID '(' method_declr_parem ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s(%s) ;\n>'%s' is a duplicate identifier",$1,$2,$3,$5,$3);
				else{ 
					sprintf($$,"%s %s %s(%s) ;",$1,$2,$3,$5);
 					add_id($3);
 				}
			}
			| method_modifier type ID '(' ')' ';' { /* function declaration */
				$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid($3)) sprintf($$,"%s %s %s() ;\n>'%s' is a duplicate identifier",$1,$2,$3,$3);
				else{ 
					sprintf($$,"%s %s %s() ;",$1,$2,$3);
 					add_id($3);
 				}
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
					| type ID assign{
						$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf($$,"%s %s %s",$1,$2,$3);
					}
					| type ID assign ',' method_declr_parem {
						$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf($$,"%s %s %s, %s",$1,$2,$3,$5);
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
					if(check_sameid($3)) sprintf($$,"[] %s\n>'%s' is a duplicate identifier",$3,$3);
					else{ 
						sprintf($$,"[] %s",$3);
 						add_id($3);
 					}
				}
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);		
					if(check_sameid($1)) sprintf($$,"%s[%d]\n>'%s' is a duplicate identifier",$1,$3,$1);
					else{ 
						sprintf($$,"%s[%d]",$1,$3);
 						add_id($1);
 					}
				}
				| '*' ID {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($2)) sprintf($$,"* %s\n>'%s' is a duplicate identifier",$2,$2);
					else{ 
						sprintf($$,"* %s",$2);
 						add_id($2);
 					}
				}
				| '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"[%d]",$2);
				}
				| '[' ']' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($3)) sprintf($$,"[] %s = new %s[%d]\n>'%s' is a duplicate identifier",$3,$6,$8,$3);
					else{ 
						sprintf($$,"[] %s = new %s[%d]",$3,$6,$8);
 						add_id($3);
 					}
				}
				| '*' ID '=' NEW type '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($2)) sprintf($$,"*%s = new %s[%d]\n>'%s' is a duplicate identifier",$2,$5,$7,$2);
					else{ 
						sprintf($$,"*%s = new %s[%d]",$2,$5,$7);
 						add_id($2);
 					}
				}
				|  ID '[' INTEGER ']' '=' leftcurly arrinit_expr rightcurly {
					$$ = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid($1)) sprintf($$,"%s[%d] = {%s}\n>'%s' is a duplicate identifier",$1,$3,$7,$1);
					else{ 
						sprintf($$,"%s[%d] = {%s}",$1,$3,$7);
						add_id($1);
					}
				}
				|  ID '[' ']' '=' leftcurly arrinit_expr rightcurly {
					$$ = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid($1)) sprintf($$,"%s[] = {%s}\n>'%s' is a duplicate identifier",$1,$6,$1);
					else{ 
						sprintf($$,"%s[] = {%s}",$1,$6);
						 add_id($1);
					}
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
				| IF '(' boolean_expr ')' leftcurly compound rightcurly {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}",$1,$3,$6);
				}
				| IF '(' boolean_expr ')' simple ELSE simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s %s",$1,$3,$5,$6,$7);
				}
				| IF '(' boolean_expr ')' simple ELSE leftcurly compound rightcurly {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s {\n%s\n}",$1,$3,$5,$6,$8);
				}
				| IF '(' boolean_expr ')' leftcurly compound rightcurly ELSE simple {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s %s",$1,$3,$6,$8,$9);
				}
				| IF '(' boolean_expr ')' leftcurly compound rightcurly ELSE leftcurly compound rightcurly {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s {\n%s\n}",$1,$3,$6,$8,$10);
				}
				| IF '(' boolean_expr ')' simple ELSE conditional {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) %s\n%s %s",$1,$3,$5,$6,$7);
				}
				| IF '(' boolean_expr ')' leftcurly compound rightcurly ELSE conditional {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf($$,"%s(%s) {\n%s\n}\n%s %s",$1,$3,$6,$8,$9);
				}
;
boolean_expr	: expr { $$ = $1;}
				| expr infixop expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf($$,"%s %s %s",$1,$2,$3);
				}
				| error { /* error recovery */ $$ = "ERROR HERE"; }
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
			| WHILE '(' boolean_expr ')' leftcurly compound rightcurly {
					$$ = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf($$,"%s ( %s ) {\n%s\n}",$1,$3,$6);
			}
			| WHILE '(' ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ( ) %s ;",$1,$4);
			}
			| WHILE '(' ')' leftcurly compound rightcurly {
					$$ = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf($$,"%s ( ) {\n%s\n}",$1,$5);
			}
			| FOR '(' for_parem ')' simple {
					$$ = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf($$,"%s ( %s ) %s ;",$1,$3,$5);
			}
			| FOR '(' for_parem ')' leftcurly compound rightcurly {
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
name			: ID { $$ = $1; }
				| ID '.' ID { 
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s.%s",$1,$3);
				}
				| ID '[' INTEGER ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s[%d]",$1,$3);
				}
				| ID '[' ID ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s[%s]",$1,$3);
				}
				| ID '[' function ']' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s[%s]",$1,$3);
				}
;
identifier_list : ID {	
					if(check_sameid($1)){
						$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf($$,"%s\n>'%s' is a duplicate identifier",$1,$1);
					}
					else{ 
 						add_id($1);
 						$$ = $1;
 					}
					
				}
				| ID assign {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($1)) sprintf($$,"%s %s\n>'%s' is a duplicate identifier",$1,$2,$1);
					else{ 
						add_id($1);
						sprintf($$,"%s %s",$1,$2);
					}
				}
				| ID assign ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($1)) sprintf($$,"%s %s, %s\n>'%s' is a duplicate identifier",$1,$2,$4,$1);
					else{ 
						sprintf($$,"%s %s, %s",$1,$2,$4);
 						add_id($1);
 					}
				}
				| ID ',' identifier_list {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid($1)) sprintf($$,"%s, %s\n>'%s' is a duplicate identifier",$1,$3,$1);
					else{ 
						sprintf($$,"%s, %s",$1,$3);
 						add_id($1);
 					}
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
				| error { /* error recovery */ $$ = "ERROR HERE"; }
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
factor			: name { $$ = $1; }
				| '!' name {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"!%s",$2);
				}
				| const_expr { $$ = $1;}
				| STRING { $$ = $1; }
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
					sprintf($$,"%s\n%s",$1,$2);
				}
				| conditional compound {
					$$ = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf($$,"%s\n%s",$1,$2);
				}
				| func_return ';' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s ;",$1);
				}
;
function		: name '(' ')' {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s()",$1);
				}
				| name '(' func_parem ')' {
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
func_return		: RETURN expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
				}
				| RETURN boolean_expr {
					$$ = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf($$,"%s %s",$1,$2);
				}
				| RETURN { $$ = $1; }
;
leftcurly 		: '{' {
					into_scope("scope");
					$$ = '{';
				}
;
rightcurly		: '}' {
					/*print_current();*/
					out_scope();				
					$$ = '}';
				}
;
%%
int main(){
	table.size = 0;
	into_scope("global");
	yyparse();
	/*print_current();*/
	return 0;
}

void into_scope(char str[]){
	table.size++;
	table.list[table.size-1].size=0;
	strcpy(table.list[table.size-1].scope_name,str);
}

void add_id(char str[]){
	table.list[table.size-1].size++;
	strcpy(table.list[table.size-1].idlist[table.list[table.size-1].size-1],str);
}

void out_scope(){
	table.list[table.size-1].size = 0;
	table.size--;
}

void print_current(){
	int cur_size = table.list[table.size-1].size, i;
	printf("scope: %s\nid list size: %d\n",table.list[table.size-1].scope_name,cur_size);
	for(i=0;i<cur_size;++i){
		printf("%s\n",table.list[table.size-1].idlist[i]);
	}
	printf("\n");
}

int check_sameid(char str[]){
	int cur_size = table.list[table.size-1].size, i;
	for(i=0;i<cur_size;++i){
		if(strcmp(table.list[table.size-1].idlist[i],str)==0) return 1;
	}
	return 0;
}

void yyerror(const char *str){
	fprintf(stderr,">%s in\n-->",str);
}
