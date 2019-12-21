#include<stdio.h>
void main(){
	typedef enum sample{
		x=10,
		y,
		z=0
	} v1;
	
	v1 a;
	a=z;
	printf("\t%d\t%d\t%d",x,y,z);
}

