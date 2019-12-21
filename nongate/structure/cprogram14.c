//Bits Field.....and a Bits field must be a part of STRUCTURE or ENUM data type
#include<stdio.h>
void main(){
	struct math{
	unsigned int a:3;
	}s;
	printf("id");
	s.a=4;

	printf("\n%d\t",s.a);
	
}
