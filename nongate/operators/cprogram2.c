#include<stdio.h>
void main(){
	int i,k,l,m,n,j=4;
	i=~j;//complement
	k=j|2;//or k|=j (bitwise inclusive OR) 
	l=j&2;//bitwise AND
	m=j^2;// bitwise exclusive OR
	n=j<<2;//bitwise shift left
	
	printf("\n%d",i);
	printf("\n%d",j);
	printf("\n%d",k);
	printf("\n%d",l);
	printf("\n%d",m);
	printf("\n%d",n);
}
