
%{
#include <stdio.h>
#include"y.tab.h"
#include<math.h>
%}
%%

[0-9]+|([0-9]*\.[0-9]+)      {yylval.dtype=atof(yytext);  return  NUMBER;	}

"+"              {	return ADD;		}
"-"              {	return MINUS;		}
"*"              {	return MULT;		}
"/"              {	return DIVISION;	}
"%"		 {	return MODULA;		}
"^"              {	return POWER;		}
"!"              {	return FACTORIAL;	}
"#"              {	return GCD;		}
"="              {	return EQUAL;		}

"<"		 {	return LOWER;		}
">"		 {	return GREATER;		}
"<="     	 {	return LE;		}
">="    	 {	return GE;		}
"=="    	 {	return ISEQ;		}
"|"	    	 {	return OR;		}
"&"    		 {	return AND;		}


log 		 {	return LOG;		}
ln  		 {	return LN;		}
sin 		 {	return SIN;		}
cos 		 {	return COS;		}
tan 		 {	return TAN;		}
cot 		 {	return COT;		}

while    	 {      return WHILE;		}

"exit"		 {	return EXIT;		}
"print"		 { 	return PRINT;		}
[a-zA-Z]    {yylval.id = yytext[0]; return identifier;}

[\t];
\$ return 0;
\n|. return yytext[0];
%%
