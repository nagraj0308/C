#include<stdio.h>
void main(){
	int a,b;
	char c[4];
	sscanf("10 20 back","%d%d%s",&a,&b,c);
	printf("%d%d%s",a,b,c);
}
