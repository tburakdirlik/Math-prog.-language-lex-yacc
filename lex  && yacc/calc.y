%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LETTERS[26];
int yylex();

%}

%{
int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}

int gcd(int a, int b)
{
  int gdivisor;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      gdivisor = i;
    }
  }
  return gdivisor;
}
 
%}

%union { double dtype; char id;}

%token ADD MINUS MULT DIVISION POWER MODULA EQUAL FACTORIAL GCD LN LOG SIN COS TAN COT EXIT PRINT

%token LOWER GREATER LE GE ISEQ OR AND WHILE

%token <dtype> NUMBER
%token <id> identifier
%type  <dtype> exp
%left  MINUS ADD
%left  MULT DIVISION
%left  LOG LN SIN COS TAN COT
%right POWER


%%

start   :line'\n'
	|start line'\n'
	;

line		: identifier EQUAL exp  { LETTERS[$1] = $3; 		}
		| PRINT exp		{ printf("Printing %f\n", $2);	}
		| exp			{ printf("Answer=%f\n",$1);	}
		| while			
;

while		: WHILE 		 WHILE'('condition')' '{'exp'}'
;
condition	: exp LOWER exp
         	| exp GREATER exp
         	| exp LE exp
         	| exp GE exp
         	| exp ISEQ exp
;

exp		: exp ADD exp		{ $$=$1+$3;}
		| exp MINUS exp 	{ $$=$1-$3;}
		| exp MULT exp 		{ $$=$1*$3;}
		| exp DIVISION exp   	{ if($3==0){  
						    yyerror("divide by zero errror"); 
						    exit(0); 
						    }  
					  else{  $$=$1/$3;  }
				        }
		| exp POWER exp 	{ $$=pow($1,$3);		}
		| exp FACTORIAL 	{ $$=factorial($1);		}
		| exp GCD exp		{ $$=gcd($1, $3);		}
		| exp MODULA exp 	{ $$=(int)$1 % (int)$3;		}
		
		| MINUS exp 		{ $$=-$2;			}
		| '('exp')'		{ $$=$2;			}
		
		| LOG exp  		{ $$=log($2)/log(10);		}
		| LN exp   		{ $$=log($2);			}
		| SIN exp  		{ $$=sin($2*3.14/180);		}
		| COS exp  		{ $$=cos($2*3.14/180);		}
		| TAN exp  		{ $$=tan($2*3.14/180);		}
		| COT exp  		{ $$=1/tan($2*3.14/180);	}
		
		| NUMBER   		{ $$=$1;			}
		| EXIT	  		{ exit(EXIT_SUCCESS);		}
		| identifier		{ $$ = LETTERS[$1];		}

;
%%
int main()
{
yyparse();}
int yyerror(char *error)
{
printf("%s\n",error);
}
