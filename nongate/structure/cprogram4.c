#include<stdio.h>
	
struct profile
{
	char name[10];
	char add[50];
	int age;
	float sal;
};

struct profile read_pf()
{
	struct profile pf;
	printf("Enter age");
	scanf("%d",&pf.age);
	printf("Enter name");
	scanf("%s",pf.name);

	printf("%s,%f",pf.add,pf.sal);
	
	return pf;
}

void print_pf(struct profile pf)
{
	printf("Age is %d\n Name is=%s", pf.age,pf.name);
}

 void main()
{
	struct profile pf1, pf2;
	pf1=read_pf();
	pf2=pf1;
	print_pf(pf2);	
	
	struct profile pf3={"nagendra","Siddharthnager",21,12.6666};
	printf("\n Age is %d\n Name is=%s", pf3.age,pf3.name);
}
		

	
