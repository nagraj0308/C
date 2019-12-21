/*
	Escape Sequence		Represents
	\a or \A 		A bell
	\b or \B		A backspace
	\f or \F		A form feed
	\n or \N		A new Line 
	\r or \R		A carriage
	\t or \T		A horizobtal tab
	\v or \V 		A vertical tab
	\xhh or \Xhh		A hexadecimal bit pattern
	\ooo 			An octal bit pattern
	\0			A null character
	\\			A backslash(\)         

to use a apostrophes(') use two consecutive apostrophes('') same in case of (") use ("")

*/
#include<stdio.h>
#include<string.h>
void main(){
	char name[]={'L','o','v','e','\n'};
	printf("\nEnter Name:");
	//scanf("%s",name);
	
	puts(name);
	
}
