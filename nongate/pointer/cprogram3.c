#include<stdio.h>
int main(){
	int a=25;
	void __attribute__((cdecl)) fun1(int a,int b);
	void __attribute__((pascal)) fun2(int a,int b);
	fun1(a,2);
	fun2(a,2);
	return 0;
}

void __attribute__((cdecl)) fun1(int a,int b){
	printf("\n%d %d",a,b);
}

void __attribute__((pascal)) fun2(int a,int b){
	printf("\n%d %d",a,b);
}
