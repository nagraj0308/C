//this is also example of passing structure to a function by value......
#include<stdio.h>
struct date{
	int d;
	int m;
	int y;
	};

struct student{
	char name[30];
	int rn;
	int marks;
	char grade;
	struct date dob;
	}s1[100];

void main(){
	int i,n;
	void readmarks(int i);
	void writemarks(int i);
        static struct student s[98]={"Nagendra",45,96,'A',5,7,1996}; //this type of declaration is in only extern and static class....
	printf("Enter the # Students" );
	scanf("%d",&n);

	for(i=0;i<n;i++){
	
	if(s1[i].marks<80)
	s1[i].grade='A';
	else
	s1[i].grade='B';
	readmarks(i);

	}

	for(i=0;i<n;i++){
	writemarks(i);
	}
}

void readmarks(int i){
	printf("\nEnter the Name \n ");
	scanf("%s",s1[i].name);
	printf("\nEnter the Roll No \n ");
	scanf("%d",&s1[i].rn);
	printf("\nEnter the Marks \n ");
	scanf("%d",&s1[i].marks);
	printf("\nEnter the Day of your Birth \n ");
	scanf("%d",&s1[i].dob.d);
	printf("\nEnter the Month of your Birth  \n ");
	scanf("%d",&s1[i].dob.m);
	printf("\nEnter the Year of your Birth  \n ");
	scanf("%d",&s1[i].dob.y);
	return;
	}
void writemarks(int i){
	printf("\nYour Record is Here\n");
	 printf("RollNO=\t\t%d\nName=\t\t%s\nMarks=\t\t%d\nGrade=\t\t%c\nDOB=\t\t%d/%d/%d\n",s1	[i].rn,s1[i].name,s1[i].marks,s1[i].grade,s1[i].dob.d,s1[i].dob.m,s1[i].dob.y);
	return;
}
	

		

	
