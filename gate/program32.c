#include<stdio.h>
void main(){
	char arr[]={10,20,30,40,50,60};
	char *ptr=(char*)(&arr +1);
	printf("%d%d",*(arr+1),*(ptr-1));
}
