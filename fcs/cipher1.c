/*
1. Write a menu driven program for encryption as well as decryption function for thefollowing 
mono alphabetic ciphers. Generate the key(s) randomly. 
	•Additive cipher
	•Multiplicative Cipher
	•Affine cipher
	•Atbash Cipher
	•ROT-13 Cipher
*/

#include<stdio.h>
#include <stdlib.h> 
void showChoice();
void additiveCipher();
void rot13();
void atbash();
void main(){
	showChoice();
}

void showChoice(){
	int choice;
	printf("Please Enter to use :\n 1=Additive cipher,\n 2=Multiplicative Cipher,\n 3=Affine cipher,\n 4=Atbash Cipher,\n 5=ROT-13 Cipher\n");
	scanf("%d",&choice);
	if(choice==1){
		additiveCipher();
	}else if(choice==2){
		printf("2");
	}else if(choice==3){
		printf("3");
	}else if(choice==4){
		atbash();
	}else if(choice==5){
		rot13();
	}else{
		printf("wrong choice!!");
	}
}

void additiveCipher(){
	char msg[50],cip[50],dic[50];
	int k=(rand()%25)+1;
	printf("\n please enter the message in small letter :");
	scanf("%s",msg);
	for(int i=0;msg[i]!='\0';i++){
		int c=msg[i]+k;
		if(c<='z'){
			cip[i]=c;
		}else{
			cip[i]=c-26;
		}
	}
	printf("\n Cipher Text is :");
	for(int i=0;msg[i]!='\0';i++){
		printf("%c",cip[i]+'A'-'a');
	}
	
	for(int i=0;cip[i]!='\0';i++){
		int p=cip[i]-k;
		if(p<'a'){
			dic[i]=p+26;
		}else{
			dic[i]=p;
		}
	}
	printf("\n Plain Text is :");
	for(int i=0;dic[i]!='\0';i++){
		printf("%c",dic[i]);
	}
}

void rot13(){
	char msg[50],cip[50],dic[50];
	int k=13;
	printf("\n please enter the message in small letter :");
	scanf("%s",msg);
	for(int i=0;msg[i]!='\0';i++){
		int c=msg[i]+k;
		if(c<='z'){
			cip[i]=c;
		}else{
			cip[i]=c-26;
		}
	}
	printf("\n Cipher Text is :");
	for(int i=0;msg[i]!='\0';i++){
		printf("%c",cip[i]+'A'-'a');
	}
	
	for(int i=0;cip[i]!='\0';i++){
		int p=cip[i]-k;
		if(p<'a'){
			dic[i]=p+26;
		}else{
			dic[i]=p;
		}
	}
	printf("\n Plain Text is :");
	for(int i=0;dic[i]!='\0';i++){
		printf("%c",dic[i]);
	}
}

void atbash(){
	char msg[50],cip[50],dic[50];
	printf("\n please enter the message in small letter :");
	scanf("%s",msg);
	for(int i=0;msg[i]!='\0';i++){
		int c=26-msg[i];
		if(c<='z'){
			cip[i]=c;
		}else{
			cip[i]=c-26;
		}
	}
	printf("\n Cipher Text is :");
	for(int i=0;msg[i]!='\0';i++){
		printf("%c",cip[i]+'A'-'a');
	}
	
	for(int i=0;cip[i]!='\0';i++){
		int p=26-cip[i];
		if(p<'a'){
			dic[i]=p+26;
		}else{
			dic[i]=p;
		}
	}
	printf("\n Plain Text is :");
	for(int i=0;dic[i]!='\0';i++){
		printf("%c",dic[i]);
	}
}