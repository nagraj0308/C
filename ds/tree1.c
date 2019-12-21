#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct NODE{
	int info;
	struct NODE *lc;
	struct NODE *rc;
};
typedef struct NODE N;

struct NODE *create_tree(int,struct NODE *);
void output_tree(struct NODE *,int);

// function to create tree
struct NODE *create_tree(int info,struct NODE *Node){
	if(Node==NULL){
		Node=(struct NODE *)malloc(sizeof(N));
		Node->info=info;
		Node->lc=NULL;
		Node->rc=NULL;
		return(Node);
	}
//test for right child..
	if(Node->info<=info)
	Node->lc=create_tree(info,Node->lc);
	else
//set all the element as right child..
	Node->rc=create_tree(info,Node->rc);
	return(Node);
}

//output function..
void output_tree(struct NODE *T,int Level){
	int i;
	if(T){
		output_tree(T->rc,Level+1);
		printf("\n");
		for(i=0;i<Level;i++)
			printf(" ");
		printf("%d",T->info);
		printf("\n");
		output_tree(T->lc,Level+1);
	}
}

void main(){
	int info;
	int choice;
	struct NODE *T=(struct NODE *)malloc(sizeof(N));
	T=NULL;
	printf("\n Input choice '0' for to break:");
	scanf("%d",&choice);
	while(choice!=0){
		printf("\n Input information of the node:");
		scanf("%d",&info);
		T=create_tree(info,T);
		printf("\nTree is");
		output_tree(T,1);
		printf("\n Input choice '0' for to break:");
		scanf("%d",&choice);

	}
	
}
