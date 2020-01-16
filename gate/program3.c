#include<stdio.h>
void main(){
	int a;
	int *p=&a;
	a=sizeof(char);
	printf("%d",a);
	a=sizeof(short);
	printf("\n%d",a);
	a=sizeof(int);
	printf("\n%d",a);
	a=sizeof(long);
	printf("\n%d",a);
	a=sizeof(float);
	printf("\n%d",a);
	a=sizeof(double);
	printf("\n%d",a);
	a=sizeof(p);
	printf("\n%d",a);
}
	
