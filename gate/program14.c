#include<stdio.h>
int sum(int a,int b);
int mul(int a,int b);
int (*pf)(int,int);

void main(){
	printf("\n%d",sum(2,3));
	pf=sum;
	printf("\n%d",(*pf)(2,3));
	pf=mul;
	printf("\n%d",(*pf)(2,3));
	
}

int sum(int a,int b){
	return a+b;

}

int mul(int a,int b){
	return a*b;

}
