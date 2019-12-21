#include<stdio.h>
#include"mprogram1a.c"

extern void result(void);
int main(){
	printf("In file main \n");
	result();
	return 0;

}
