#include<stdio.h>
#include<string.h>
void main(){
	char str1[]={'L','o','v','e','\n'};
	char str2[]="You Darling";
	int i=0;
	while(i<=8){
	printf("%c,%d\t",str2[i],i);//here printf will not print '\0' because we used %s....
	i++;
	}
	
}
