// a program to converts letters in uppercase..
#include<stdio.h>
#include<string.h>
#include <curses.h>
void main(){
	char name[30];
	printf("enter String");
	scanf("%s",name);
	int i=0;
	while(i<=strlen(name)){
		if(name[i]>=65&&name[i]<=90)
			printf("%c",name[i]+32);
		else
			printf("%c",name[i]);
		i++;
	}
	
	
}
