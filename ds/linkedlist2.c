#include <stdio.h>
#include<malloc.h>
#define size 10
typedef struct node{
	int d;
	struct node *next;
}N;

void main(){
	N *start;
	N *ptr;
	ptr=start=NULL;
	int choice=0;
	ptr=start=(struct node*)malloc(sizeof(N));


	while(choice==0){
		printf("\nenter informarion:->");
		scanf("%d",&ptr->d);
		printf("\nHave you more data y/n:->");

		scanf("%d",&choice);
		if(choice==0){
			ptr->next=(struct node*)malloc(sizeof(N));
			ptr=ptr->next;
		}
		else{
			ptr->next=NULL;		
		}
	}
	while(start)
	{
		printf("\n%d",start->d);
		start=start->next;

	}
	//free(ptr);
	//free(start);


	getchar();

}

