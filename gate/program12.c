#include<stdio.h>
void swap1(int a,int b);
void swap(int *a,int *b);
void main(){
	int a=2,b=3;
	swap(&a,&b);
	printf("%d",a);
	printf("%d",b);
	
	swap1(a,b);
	printf("%d",a);
	printf("%d",b);
	
}



void swap1(int a,int b){
	int c=a+b;
	b=c-b;
	a=c-b;
	
}

void swap(int *a,int *b){
	int c=*a+*b;
	*b=c-*b;
	*a=c-*b;
	
}


