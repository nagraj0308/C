#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 struct dllist{
	struct dllist *pre;
	struct dllist *next;
	int d;

};

typedef struct dllist D;


//global declaration
int num;
D *lp=NULL,*rp=NULL;

// Prototypes of various function
void create(D *);
void display_left(D *);
void display_right(D *);

//main
void main(){
	lp=(D *)malloc(sizeof(D));
	create(lp);
	display_left(lp);
	display_right(rp);
	getchar();

}


//create
void create(D *ptr){
	int a;
	num=0;
	lp->pre=NULL;
	printf("\n Enter 0 for Exit any other key for continue:");
	scanf("%d",&a);
	if(a==0){
		free(lp);
		exit(0);
	}
	do{
		printf("\n Input the value of the node:%d:",(num+1));
		scanf("%d",&ptr->d);
		printf("\n want to continue (0/1)->:");
		scanf("%d",&a);
		if(a==0){
			ptr->next=(D *)malloc(sizeof(D));
			ptr->next->pre=ptr;
			ptr=ptr->next;
		}
		num++;
	}while(a==0);
	ptr->next=NULL;
	rp=ptr;//assighning the addfess 
	printf("\n Total nodes=%d",num);
}

//function to display left to right node
void display_left(D *ptr){
	while(ptr!=NULL){
		//printf("\n 0x%x",ptr);
		printf("\n %d",ptr->d);
		ptr=ptr->next;
	}
}

//function to display right to left node
void display_right(D *ptr){
	while(ptr!=NULL){
		//printf("\n 0x%x",ptr);
		printf("\n %d",ptr->d);
		ptr=ptr->pre;
	}
}













