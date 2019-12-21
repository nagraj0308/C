#include <stdio.h>
void insertion_sort(int a[],int n);
void main(){
	int x[10]={6,3,4,8,2,9,1,0,3,4};
	insertion_sort(x,10);
	int i;
	for(i=0;i<10;i++)
	printf("%d,",x[i]);
		
	
}

void insertion_sort(int a[],int n){
	int j,p;
	int temp;
	
	for(p=1;p<n;p++){
		temp=a[p];
		for(j=p;j>=0&&temp<a[j-1];j--){
			a[j]=a[j-1];
		}
		a[j]=temp;
	}

}
