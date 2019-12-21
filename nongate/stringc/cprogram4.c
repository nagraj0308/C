//WAP TO FIND A PATTERN IN A PARAGRAPH............

#include<stdio.h>
#include<string.h>

void main(){
	char str1[200],str2[30],ch;
	int i,j,len,flag=0;

	i=0;// input paragraph
	printf("\nEnter the Paragraph:\t");
	do{
		ch=getchar();
		str1[i++]=ch;
	}while(ch!='\n');
	str1[i-1]='\0';



	// input pattern
	i=0; 
	printf("\nEnter pattern to be search:\t");
	do{
		ch=getchar();
		str2[i++]=ch;
	}while(ch!='\n');
	str2[i-1]='\0';

	i=0;
	while(str1[i]!='\0'){
		
		if(str1[i]==str2[0]){
			j=0;
			while(str2[j]!='\0'){
				if(str1[i+j]!=str2[j]) { 
					flag=1;
				 }
				
				j++;
			}
			if(flag==0){ printf("\npattern found at %dth place",i); }
			flag=0;
		}
		
		i++;
	}

}
/*
OUTPUT:-

nagendra0308@nagendra0308:~/Desktop/C/stringc$ gcc cprogram4.c
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter the Paragraph:	hello i am nagendra @@  kk @@ ** ff **

Enter pattern to be search:	**

pattern found at 30th place
pattern found at 36th place
*/
