/*
2.Write a menu driven program for both encryption and decryption function for thefollowing ciphers.
	•Bifid Cipher
	•Trifid Cipher
	•Nihilist Cipher
*/

#include<stdio.h>
#include <stdlib.h> 
void showChoice();
void trifidCipher();
void main(){
	showChoice();
}

void showChoice(){
	int choice;
	printf("Please Enter to use :\n 1=Bifid Cipher,\n 2=Trifid Cipher,\n 3=Nihilist Cipher \n");
	scanf("%d",&choice);
	if(choice==1){
		//additiveCipher();
	}else if(choice==2){
		trifidCipher();
	}else if(choice==3){
		printf("3");
	}else{
		printf("wrong choice!!");
	}
}

void trifidCipher(){
	char msg[50],cip[50],dic[50];
	char key[20];
	char lay[3][3][3];
	printf("\n please enter the key string in small letters : ");
	scanf("%s",key);
	printf("\n please enter the Plain Text in small letters : ");
	scanf("%s",msg);
	int A[26],B[27];
	for(int k=0;k<26;k++){
		A[k]=k;
		B[k]=200;
	}
	for(int i=0;key[i]!='\0';i++){
		A[key[i]-'a']=-1;
		B[i]=key[i]-'a';
	}
	for(int k=0;k<26;k++){
		printf("A=%d",A[k]);
		printf(" B=%d\n",B[k]);
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(i==2&&j==2&&k==2){
					lay[i][j][k]='+';
				}else{
					if(B[i+j+k]!=200){
						lay[i][j][k]=B[i+j+k]+'a';
					}else{
						int l;
						for(l=0;A[l]!=-1;++l){}
							lay[i][j][k]=A[l]+'a'; 
								A[l]=-1;
							
					}	
				}
			}
		}	
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf(" %c",lay[i][j][k]);
			}
		}	
	}
	
	
}

