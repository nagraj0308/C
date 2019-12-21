//WAP TO COMPARE CONTENT OF TWO STRINGS............

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

	//Comparing contents of Strings
	i=0; flag=0;
	while(str1[i]!='\0'||str2[i]!='\0'){
		if(str1[i]>str2[i]){ 
			flag=1;
			break;
		} 
		if(str1[i]<str2[i]){ 
			flag=2; 
			break;
		}
		i++;
	}
	if(flag==0)
	printf("\nString1 and String2 are Equals\n");
	if(flag==1)
	printf("\nString1 is Greater than String2\n");
	if(flag==2)
	printf("\nString1 is Lesser than String2 \n");
	
}

/*  
OUTPUTS:-

nagendra0308@nagendra0308:~/Desktop/C/stringc$ gcc cprogram2.c
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter String 1:	hello

Enter String 2:	hai

String1 is Greater than String2
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter String 1:	hai

Enter String 2:	hello

String1 is Lesser than String2 
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter String 1:	hello

Enter String 2:	hello

String1 and String2 are Equals
*/

