#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void main(){
	char st[80],dw[30],wd[30],ch='a';
	int i,j,k,id=0,ck=0;
	printf("\nEnter a Paragraph\n");
	for(i=0;ch!='\n';i++){
		ch=getchar();
		st[i]=ch;
	}
	st[strlen(st)]='\0';
	printf("\nEnter a String to be delete\n");
	scanf("%s",dw);
	for(i=0;i<=strlen(st);i++){   //1
		if(st[i]==32||st[i]=='\0'){ //2
			wd[id]='\0';
			if(strcmp(dw,wd)==0){
				ck=1;
				if(st[i]=='\0'){
					st[i-strlen(wd)]='\0';
				}

				else{
					for(j=i-strlen(wd),k=i+1;st[k]!='\0';j++,k++){
					st[j]=st[k];
					}
					st[j]='\0';
				}
			
			
			}

			else{
				id=0;
			}
		
		}

		else{//2
			wd[id]=st[i];
			id++;
		}
	}


	if(ck==0){	 //1
		printf("word not found");
	}

	else{
		printf("given string after deletion: %s",st);
	}	
}
