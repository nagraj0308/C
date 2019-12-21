#include<stdio.h>
void main(){
	int a;
	int *p;
	a=10;
	p=&a;
	printf("\n%p",p);
	printf("\n%d",*p);
	printf("\n=%p",&a);
	printf("\n%d",*&a);
	
}
