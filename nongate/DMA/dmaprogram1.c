#include<stdio.h>
#include<malloc.h>
 int main(){
	char *p;
	p=(char*)malloc(sizeof(char)*2); 
	
	printf("enter your name");
	scanf("%c%c",&p[0],&p[1]);
	printf("%c,%c",p[0],p[1]);
 
        //printf("%d",k);
	free(p);

 return 1;}


