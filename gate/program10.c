#include<stdio.h>
void main(){
	int sum=0,j=0,i=0;
	while(i<10){
		while(j<10){
			printf("\n%d,%d",i,j);
			j++;
			if(j>5) break;
		}
		if(i>5) break;
		i++;
	}
}

