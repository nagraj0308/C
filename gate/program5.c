#include<stdio.h>
void main(){
	int a=99;
	char c='c';
	printf("\n%d",a); 
	printf("\n%c",a);
	printf("\n%c",c);
	printf("\n%d",c);
	
	a=2345;
	c=a;
	printf("\n%d",c);
	printf("\n%c",c);
	printf("\n%c",a); 
	
	c=23;
	a=c;
	printf("\n%d",c);
	printf("\n%c",c);
	printf("\n%c",a);   
}
	
