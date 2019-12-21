#include<stdio.h>
void main(){
	int sum=0,num,i=0;
	while(i<15){
		i++;
		scanf("%d",&num);
		if(num>=0) sum+=num;
		else continue;
		
	}
	printf("sum=%d",sum);
}

