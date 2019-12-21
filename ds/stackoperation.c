#include <stdio.h>
#define size 10
int top=-1;
int S[size];
void display(int a[]);
void push(int a[],int d);
void pop(int a[]);
void main(){
	
	push(S,10);
	push(S,9);
	display(S);
	pop(S);
	display(S);
	
}

void display(int a[]){
	int i;
	if(top==-1)
		printf("Stack is empty");
	else {
		i=top;
		while(i>=0){
			printf("\n%d",a[i]);
			i--;
		}

	}
}

void push(int a[],int d){
	if(top==(size-1))
		printf("Stack is is Full");
	else{
		++top;
		a[top]=d;
	}				
}

void pop(int a[]){
	int d;
	if(top==-1)
		printf("Stack is UnderFlow");
	else{
		d=a[top];
		top--;
		//return d;
	}				
}


//void peep(){   }
//void update(){   }
