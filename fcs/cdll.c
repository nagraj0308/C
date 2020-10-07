/*		Assignment #7      
Write  a  program  to  create  a  circular  doubly  linked  list.You  program  should  be  able  to  perform  the  following operations: 
	1) Inserting a node at the beginning,
	2) Inserting a node at the end,   
	3) Inserting a node before a given location,
	4) Inserting a node after a given location,
	5) Delete the first node,
	6) Delete the last node,
	7) Delete a node at a specific location.
*/

#include<stdio.h>
#include<stdlib.h>  
void showChoice();
void printAllNodes();
void insertAtBeginning();
typedef struct node{ 
	int data; 
	struct node* prev;
	struct node* next; 
}N;

N* head;
void main(){
	printf("2");
	showChoice();
	insertAtBeginning();
	printAllNodes();
	
}


void printAllNodes(){  
	N *temp;
	temp = head; 
	printf("All Nodes: ");
	printf(" %d",temp->data);    
	while(temp -> next != head){  
		printf(" %d",temp->data); 
        	temp = temp -> next;   
    	}  
}


void insertAtBeginning(){  
   N *newNode,*temp;   
   int data;  
   newNode = (N *)malloc(sizeof(N));    
    printf("\nEnter node value");  
    scanf("%d",&data);  
    newNode->data=data;  
   if(head==NULL)  
   {  
      head = newNode;  
      head -> next = head;   
      head -> prev = head;   
   }  
   else   
   {  
       temp = head;   
    while(temp -> next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = newNode;  
    newNode-> prev = temp;  
    head -> prev = newNode;  
    newNode -> next = head;  
    head = newNode;  
   }  
   printf("\nNode inserted\n");  
}  
     

void showChoice(){
	int choice;
	printf("Please Enter:\n 1=Inserting a node at the beginning,\n 2=Inserting a node at the end,\n 3=Inserting a node before a given location,\n 4=Inserting a node after a given location,\n 5=Delete the first node\n 6=Delete the last node\n 7=Delete a node at a specific location \n 8=Exit\n");
	scanf("%d",&choice);
	if(choice==1){
		insertAtBeginning();	
	}else if(choice==8){
		exit();
		printf("2");
	}else{
		printf("wrong choice!!");
	}
	
}