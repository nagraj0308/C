//nesting of structure using pointer variable.....
#include<stdio.h>
#include<string.h>
struct clg
{
	char cname[20];
};
struct student
{
	int id;
	char name[20];
	float per;
	struct clg c;
};


int main(){
	struct student s1;
	struct student *s2;
	printf("id,name,per,cname");
	scanf("%d%s%f%s",&s1.id,s1.name,&s1.per,s1.c.cname);
	s2=&s1;
	printf("\n%d\t%s\t%f\t%s\n",s2->id,s2->name,s2->per,s2->c.cname);
	return 0;
}
