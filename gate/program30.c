#include<stdio.h>
int main ( )
{
	
	int c,d,e,*a[6]={&c,&d,&e},b[2][2]={2,3,4,5};
	a[2][4]=4;
	printf ("\n%ld",sizeof(a));
	printf ("\n%d",a[2][3]);
	printf ("\n%d",*a[1]);
	printf ("\n%d",*b[1]);
}
