//union.....
#include<stdio.h>
#include<string.h>
union clg
{
	char cname[20];
};
union student
{
	int id;
	char name[20];
	float per;
	union clg c;
};


int main(){
	union student s1;
	union student *s2;
	printf("id,name,per,cname");
	scanf("%d%s%f%s",&s1.id,s1.name,&s1.per,s1.c.cname);
	s2=&s1;
	printf("\n%d\t%s\t%f\t%s\n",s2->id,s2->name,s2->per,s2->c.cname);
	return 0;
}
