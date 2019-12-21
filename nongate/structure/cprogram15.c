#include<stdio.h>
#include<stdlib.h>
struct name{
	int a;
	char c[30];
	};
int main(){
	struct name *p;
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	
	p=(struct name*)malloc(n*sizeof(struct name));
	for(i=0;i<n;i++){
		printf("Enter string and integer respesctively:\n");
		scanf("%s%d",(p+i)->c,&(p+i)->a);
		}
	printf("Displaying Numbers\n");
	for(i=0;i<n;i++)
	printf("%s\t%d\t\n",(p+i)->c,(p+i)->a);
	return 0;
}
	


