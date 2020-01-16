#include<stdio.h>
struct test{
	int i;
	char *c;
}st[]={5,"become",4,"better",6,"jungle",8,"ancestor",7,"brother"};
int main ( ){
	struct test *p=st;
	p+=1;
	//++p->c;
	printf("%s ",++p->c);//c points e
	printf("%s ",p++->c);//p=2
        printf("%s ",p++->c);//p=3
	printf("%c ",*++p->c);
	printf("%d ",p[0].i);
	printf("%s ",p->c);
	printf("%s ",(st+1)->c);
	
}
