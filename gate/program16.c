#include<stdio.h>
#include<stdlib.h> 
#define DS 100
char *resize(char *p,int count);
void main(){
	int count=0,capacity=DS;
	char *input;
	char ch;
	input=(char*)malloc(DS);
	while((ch=getchar())!=EOF){
		if(count==capacity){
			input=resize(input,capacity);
			capacity=capacity+DS;
		}
		input[count++]=ch;
	}
	puts(input);

	

}
char *resize(char *p,int capacity){
	return realloc(p,capacity+DS);

}

