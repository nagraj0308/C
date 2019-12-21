//WAP TO COMPARE COUNT LETTERS,VOWELS,CONSONANTS,SPECIAL SYMBOLS AND WORD IN A STRINGS............

#include<stdio.h>
#include<string.h>

void main(){
	char str1[100],ch;
	int i,l=0,v=0,c=0,ss=0,w=0,len=0,flag=0;

	i=0;// input string
	printf("\nEnter String:\t");
	do{
		ch=getchar();
		str1[i++]=ch;
	}while(ch!='\n');
	len=i-1;
	str1[i-1]='\0';

	i=0;
	while(str1[i]!='\0'){
		if((str1[i]>=65 && str1[i]<=90)||(str1[i]>=97 && str1[i]<=122)){
			if(str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'||str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u') { v++; }
			else { c++; }
			flag=1;
			if(str1[i+1]==32) w++;
		}
		

		i++;
	}
	l=v+c;
	printf("\nStringLength=%d\t",len);
	printf("#Letters=%d\t",l);
	printf("#Vowels=%d\t",v);
	printf("#Consonants=%d\t",c);
	printf("#Words=%d\n",w+1);
	
}

/*
OUTPUTA:-

nagendra0308@nagendra0308:~/Desktop/C/stringc$ gcc cprogram3.c
nagendra0308@nagendra0308:~/Desktop/C/stringc$ ./a.out

Enter String:	I am Nagendra  Chaudhary    

StringLength=24	#Letters=20	#Vowels=8	#Consonants=12	#Words=4

*/
