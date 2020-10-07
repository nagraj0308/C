//Generate all additive inverse pair and multiplicative inverse pair in Zn
#include<stdio.h>
void main(){
	int n,i,j;
	printf("Please enter n");
	scanf("%d",&n);
	printf("Addative inverse pair of Z%d :",n);
        for(i=0;i<n;i++){
		 for(j=0;j<n;j++){
			if(((i+j)%10)==0)
			printf("(%d,%d)",i,j);
		}
	}
	printf("\nMultiplicative inverse pair of Z%d :",n);
        for(i=0;i<n;i++){
		 for(j=0;j<n;j++){
			if(((i*j)%10)==1){
			printf("(%d,%d)",i,j);
			}
		}
	}


}
