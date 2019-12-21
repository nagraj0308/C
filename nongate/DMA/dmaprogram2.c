#include<stdio.h>
#include<malloc.h>
 int main(){
	int *p;
	p=(int*)calloc(2,sizeof(int)); 
	
	printf("enter your name");
	scanf("%d%d%d",&p[0],&p[1],&p[2]);
	printf("%d,%d,%d",p[0],p[1],p[2]);
 
        //printf("%d",k);
	free(p);

 return 1;}


