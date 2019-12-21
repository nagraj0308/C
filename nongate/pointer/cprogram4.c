//pointer to function...
#include<stdio.h>
void *fun1(int a,int b);
int main(){
	int a=25;
	
	
	(*fun1)(a,2);
	return 0;
}

void *fun1(int a,int b){
	printf("\n%d %d",a,b);
}
