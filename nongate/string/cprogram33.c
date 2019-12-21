#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void main(){
	char st1[80];

	printf("\nEnter a Paragraph\n");
	 fgets(st1, 80, stdin); //it store '\n''\0' at the last of the string..
	for(int i=0;i<=strlen(st1);i++){ 
		printf("\n%c  %d",st1[i],st1[i]);
	} 
	char st2[80]="Hellow  nagendra  ";
	for(int i=0;i<=strlen(st2);i++){ 
		printf("\n%c  %d",st2[i],st2[i]);
		
		} 
	printf("\n%d  %c",10,10);
}
