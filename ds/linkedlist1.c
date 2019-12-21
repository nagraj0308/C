#include <stdio.h>
#include<malloc.h>
#define size 10
typedef struct node{
	int d;
	struct node *p;
}N;

void main(){
	N *start,n1,n2,n3,n4;
	int i;
	start=(struct node*)malloc(sizeof(N));
	start=&n1;
	n1.d=1;
	n1.p=&n2;
	n2.d=2;
	n2.p=&n3;
	n3.d=3;
	n3.p=&n4;
	n4.d=4;

	for(i=0;i<4;i++){
		printf("\n%d",start->d);
		start=start->p;

	}

	

}

