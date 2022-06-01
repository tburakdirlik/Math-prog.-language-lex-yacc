# MATH Programming Language 
Project group members: Tunahan Burak Dirlik

Programing language name: Math
## What is Math ?

This language created for make mathematical calculations. Math programming language can execute arithmetic expressions and we can assing a value to variable.
So we can also use this variables to make mathematical calculations. In this language there are some mathematical functions that we can use like sin(), cos()
gcd(). Every calculation realize in double data type. 

## How It works?

```bash
(root💀kali)-[/]
└─# lex calc.l
(root💀kali)-[/]
└─# yacc -d calc.y 
(root💀kali)-[/]
└─# cc lex.yy.c y.tab.c -ll -lm

(root💀kali)-[/]
└─# ./a.out <prog.math
Printing 30.000000
Answer=0.499770
Answer=0.500460

```
### Source code: prog.math

```bash
a=15
b=15
c=30
x=a+b-c+1*30
print(x)
sin(x)
cos(x+30)
```

Also we can give the program codes from terminal like below:

```bash
(root💀kali)-[/]
└─# ./a.out 
a=15
b=15
c=30
x=a+b-c+1*30
print(x)
Printing 30.000000
cos(x+30)
Answer=0.500460
exit
```

### Example execution
<p align="center">
  <img src="https://raw.githubusercontent.com/akdenizcse/project-step-2-syntax-analyzer-team_tunahan_burak_dirlik/master/lex%20%20%26%26%20yacc/exprog.png?token=GHSAT0AAAAAABUHL5AJ7NJTZRMN5WZOMNCAYUP6MIQ" />
</p>


### Features and Functions

| FUNCTIONS | EXAMPLE USAGE |
| -- | -- | 
|sin()|sin(30)  or sin30|
| cos()|cos(30)|
| tan()|tan(30)|
| cot()|cot(30)|
| addition|45+45|
| subtraction|45-45|
| multiplication|45*5|
| division|45/5|
| power|2^5|
| modula| 10%4|
| factorial|5!|
| greatest common divisor|10#5|
| logarithm to base 10|log10 or log(10)|
| logarithm to base e|ln2.718 or log(2.718)|
| print()|you can put any variable or value into brackets|
|exit |	it terminates the program|
|assigning variable| a=400 |

we can use the brackets for make prioritize

### UPDATES FOR LEXICAL ANALYZING

Return statements for tokens added.

Added new new characters (lexemes) to be parse in the lex file. 

### GRAMMER

```
start   ->	line
	  	|start line

line    -> 	identifier EQUAL exp 
	   	| PRINT exp		
	   	| exp
		| while			

while	->	WHILE'('condition')' '{'exp'}'

condition  ->	 exp LOWER exp
         	| exp GREATER exp
         	| exp LE exp
         	| exp GE exp
         	| exp ISEQ exp
		
exp	->	 exp ADD exp		
		| exp MINUS exp 
		| exp MULT exp 		
		| exp DIVISION exp   	
		| exp POWER exp 	
		| exp FACTORIAL 	
		| exp GCD exp		
		| exp MODULA exp 	
		| MINUS exp 		
		| '('exp')'		
		| LOG exp  		
		| LN exp   		
		| SIN exp  		
		| COS exp  		
		| TAN exp  		
		| COT exp  		
		| NUMBER   		
		| EXIT	  	
		| identifier		
```

I tried to implement while loop but not working, get sytntax error.
Another functions are working smoothly.
