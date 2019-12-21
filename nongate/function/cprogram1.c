#include<stdio.h>
int fact(int num);
void main(){

printf("Factorial=%d",fact(5));

}

int fact(int a){
	if(a<=1)
	return 1;
	else
	return(a*fact(a-1));

}
