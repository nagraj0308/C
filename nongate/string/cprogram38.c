#include<stdio.h>
#include<string.h>
void main(){
	char str1[40]="hello,india",str2[40]="hello,Pakistaan";
	printf("%s",strcpy(str2,strcat(str1,str2)));
}
