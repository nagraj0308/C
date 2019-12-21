#include<stdio.h>
int max(int x,int y);
void main(){
	printf("%d",max(2,3));
}



int max(int x,int y){
	return (x>=y)?x:y;
}

