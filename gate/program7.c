#include<stdio.h>
#define yes 0
void main(){
	int i;
	float f;
	f=10;
	printf("\n%f",f);
	f=(float)10;
	printf("\n%f",f);

	i=3.45;
	printf("\n%d",i);
	i=(int)4.55;
	printf("\n%d",i);
	i=f;
	printf("\n%d",i);
	i=(int)f;
	printf("\n%d",i);

}


