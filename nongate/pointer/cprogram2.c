#include<stdio.h>
void main(){
	int a=10;
	float f=20;
	char ch='a';
	void *p;
	p=&a;
	printf("\n%d",*(int*)p);
	p=&f;
	printf("\n%f",*(float*)p);
	p=&ch;
	printf("\n%c",*(char*)p);
	
}
