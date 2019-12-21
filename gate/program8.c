#include<stdio.h>
void main(){
	int opt;
	char c=98;
	while((c=getchar())!=EOF){
		printf("\nEnter Option");
		scanf("%d",&opt);
		switch(opt){
			case 1 : printf("\ncase %d",opt); break;
			case 2 : printf("\ncase %d",opt); break;
			case 3 : printf("\ncase %d",opt); break;
			case 4 : printf("\ncase %d",opt); break;
			default : printf("\ndefault case %d",opt); break;
			}
	}
}
