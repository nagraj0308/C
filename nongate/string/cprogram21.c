#include<stdio.h>
#include<string.h>

void main(){
	char str1[30],str2[30];
	char str4[]="Nagendra";
	printf("Enter two strings\n");
	scanf("%s%s",str1,str2);

	puts("the strings are\t");
	puts(str1);
	puts(str2);

	printf("the length of the str1:%ld and str2:%ld ",strlen(str1),strlen(str2));
	char str3[30];
	strcpy(str3,str2);
	printf("\nThe str3 is=%s",str3);
	
	printf("\nThe str concat is=%s",strcat(str1,str2));
	
	printf("\nThe Difference in Ascii values of Starting differ letters of given two letters 	 %d",strcmp(str1,str2));

	


}
	
