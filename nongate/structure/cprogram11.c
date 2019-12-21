//typedef.....
#include<stdio.h>
#include<string.h>
typedef struct college    // writing college is optional
{
	char cname[20];
}v1;
typedef struct student	// writing student is optional
{
	int id;
	char name[20];
	float per;
	v1 c;
}v2;


int main(){
	v2 s1;
	v2 *s2;
	printf("id,name,per,cname");
	scanf("%d%s%f%s",&s1.id,s1.name,&s1.per,s1.c.cname);
	s2=&s1;
	printf("\n%d\t%s\t%f\t%s\n",s2->id,s2->name,s2->per,s2->c.cname);
	return 0;
}
