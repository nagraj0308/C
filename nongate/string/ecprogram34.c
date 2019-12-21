#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void main(){
	char st[80],dw[30],wd[30],ch='0';
	int i=0,j,k,id=0,ck=0;
	printf("\nEnter a Paragraph\n");
	while(ch!='\n'){
		st[i]=ch;
		ch=getchar();
		i++;
	}
	printf("\nEnter a String to be delete\n");
	i=0;
	while(ch!='\n'){
		dw[i]=ch;
		ch=getchar();
		i++;
	}
	for(i=0;i<=strlen(st);i++){   
		if(st[i]!=32||st[i]!='\0'){ 
			wd[id]=st[i];
			wd[id+1]='\0';
			st[i+1]='\0';
		}
	else{
		
		if(strcmp(dw,wd)==0){
			ck=1; //checked
			printf("\nString is found ");
			for(j=i-strlen(wd),k=i+1;st[k]!='\0';j++,k++){
				st[j]=st[k];
			}





				if(st[i]=='\0'){
					st[i-strlen(wd)]='\0';
				}

				else{
					for(j=i-strlen(wd),k=i+1;st[k]!='\0';j++,k++){
					
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
