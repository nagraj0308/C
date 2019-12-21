#include<stdio.h>
void main(){
	char name[20],ch='\0';
	int i=0;
	printf("\n Enter Your Name:");
	while(ch!='\n'){
		ch=getchar();
		name[i]=ch;
		i++;
		}
	printf("\nName:");
	for(i=0;name[i]!='\0';i++)
	putchar(name[i]);
	
}
