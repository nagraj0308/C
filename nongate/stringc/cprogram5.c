//WAP TO FIND A............

#include<stdio.h>
#include<string.h>

void main(){
	char str1[200],str2[30],ch;
	int i,j,len,flag=0,count=0;
	long c;
	FILE *fopen(),*fp;

	i=0;// input pattern
	printf("\nEnter the Pattern:\t");
	do{
		ch=getchar();
		str1[i++]=ch;
	}while(ch!='\n');
	str1[i-1]='\0';

	fp=fopen("cprogram5.txt","r");
	c=getc(fp);
	while(c!=EOF){
		
		if(c==str2[0]){
			j=0;
			while(str2[j]!='\0'){
				if(getc(fp)!=str2[j]) { 
					flag=1;
				 }
				
				j++;
			}
			if(flag==0){ count++; }
			flag=0;
		}
		
		c=getc(fp);
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
