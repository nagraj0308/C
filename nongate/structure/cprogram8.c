//how to copy in structure.....
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
	float per;
};

int main(){
	struct student s1={1,"raju",90.5},s2;
	struct student *s3,*p;
	printf("id,name,per");
	scanf("%d%s%f",&s1.id,s1.name,&s1.per);
	p=&s1;
	memcpy(s3,p,sizeof(s1)); //method 2
	s2=s1; //method 1
	printf("\n%d\t%s\t%f\n",s2.id,s2.name,s2.per);
	printf("\n%d\t%s\t%f\n",s3->id,s3->name,s3->per);
	return 0;
}
