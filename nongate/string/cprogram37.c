#include<stdio.h>
#include<string.h>
void main(){
	
	char ch='A';
	printf("%ld,%ld,%ld",sizeof(ch),sizeof('A'),sizeof(3.14f));
	printf("%ld",strlen("123456"));
	
	char p[]="%c\n";
	printf(p,65);
}
