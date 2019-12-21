#include<stdio.h>
void main(){
	int k=0,i,l=0;
	char a[20];
	i=0;
	while((a[i++]=getchar())!=10&&i<20);
	//printf("%d%c",i,a[i]);
	for(i=0;a[i]&&(a[i]!=10);i++){
		if(a[i]==a[l]){
			k++;
		}
		else{
		printf("%d%c",k,a[i-1]);
		k=1;
		l=i;
		}
		
	}
}
