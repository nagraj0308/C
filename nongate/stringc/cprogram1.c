//WAP TO FIND THE LENGTH OF TWO STRING AND COMPARE THEM....

#include<stdio.h>
#include<string.h>

void main(){
	char str1[30],str2[30],ch;
	int i,len,flag;

	i=0;// input string1
	printf("\nEnter String 1:\t");
	do{
		ch=getchar();
		str1[i++]=ch;
	}while(ch!='\n');
	str1[i-1]='\0';



	// input string2
	i=0; 
	printf("\nEnter String 2:\t");
	do{
		ch=getchar();
		str2[i++]=ch;
	}while(ch!='\n');
	str2[i-1]='\0';
	
	//finding length of string1
	len=0;
	i=0;
	while(str1[i]!='\0'){
		len++;
		i++;
	}
	printf("\nLength of String1=%d",len);



	//finding length of string2
	len=0;
	i=0;
	while(str2[i]!='\0'){
		len++;
		i++;
	}
	printf("\nLength of String2=%d",len);

	//Comparing of Strings
	i=0; flag=0;
	while(str1[i]!='\0'||str2[i]!='\0'){
		if(str1[i]!=str2[i]){ flag=1; }
		i++;
	}
	if(flag==0)
	printf("\nString1 and String2 are Equals\n");
	else
	printf("\nString1 and String2 are not Equals\n");
	

}

/* OUTPUTS:-

nagendra0308@nagendra0308:~/Desktop/C/stringc$ gcc cprogram1.c
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter String 1:	hello  

Enter String 2:	Nagendra

Length of String1=6
Length of String2=9
String1 and String2 are not Equals
*/


	
