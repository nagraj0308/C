// Declaring structure varivable globally.....
#include<stdio.h>
#include<string.h>

struct student{
	char name[30];
	int rn;
	int marks;
	char grade;
	};
struct student s;//here is global declaration
void readmarks();
void main(){
	
	readmarks();
	
}

void readmarks()
{
	printf("\nEnter the Name \n ");
	scanf("%s",s.name);
	printf("\nEnter the Roll No \n ");
	scanf("%d",&s.rn);
	
	printf("\nEnter the Day of your Grade\n ");
	scanf("%c",&s.grade);
	printf("\nEnter the Marks \n ");
	scanf("%d",&s.marks);
	
	printf("\nYour Record is Here\n");
	 printf("RollNO=\t\t%d\nName=\t\t%s\nMarks=\t\t%d\nGrade=\t\t%c\n",s.rn,s.name,s.marks,s.grade);
	return;
}
	

		

	
