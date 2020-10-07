//Find inverse of a matrix in modulusn.
#include<stdio.h>
void main(){
	int n,i,j;
	int m[3][3],d=0;
	printf("Please enter value of n ");
	scanf("%d",&n);
	printf("Please enter all 9 matrix values ");
        for(i=0;i<3;i++)
  		for(j=0;j<3;j++){  
   			 scanf("%d",&m[i][j]);  
  		} 
	printf("\nEntered Matrix :\n");
        for(i=0;i<3;i++){
		 for(j=0;j<3;j++){
			printf("  %d",m[i][j]);
		}
		printf("\n");
	}
	
        d=m[0][0]*(m[1][1]*m[2][2]-m[2][1]*m[1][2])-m[0][1]*(m[1][0]*m[2][2]-m[2][0]*m[1][2])+m[2][0]*(m[1][0]*m[2][1]-m[2][0]*m[1][1]);
	printf("\nDeterment of matrix :%d\n",d);

}