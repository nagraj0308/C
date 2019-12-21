#include<stdio.h>
 
	
 void main(){	
	struct emply{
		char name[10];
		char address[11];
		int age;
		float sal;
		} emp1,emp2;
	struct emply emp3;
			

	emp1.age=34;
	emp2=emp1;
	emp3=emp2;
	printf("%d,%d",emp1.age,emp3.age);
}
	
	
