#include<stdio.h>
void main(){
	char str1[30],str2[30],str3[60],ch='\0';
	int i=0,j=0;
	printf("\n Enter String1:");
	while(ch!='\n'){
		ch=getchar();
		str1[i]=ch;
		i++;
		}
	printf("\n Enter String2:");
	while(ch!='\n'){
		ch=getchar();
		str2[i]=ch;
		i++;
		}
	i=0;
	j=0;
	while(str1[i]!='\n'){
		str3[j++]=str1[i];
		i++;
		}
	i=0;
	while(str2[i]!='\n'){
		str3[j++]=str2[i];
		i++;
		}
	printf("\nConcanated String is:");
	
	for(i=0;str3[i]!='\0';i++)
	putchar(str3[i]);
	
}
