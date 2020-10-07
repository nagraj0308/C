#include<stdio.h>
void main(){
	int q,r,r1,r2,a,b;
	int s1=1,s2=0,s;
        int t1=0,t2=1,t;
	printf("Please enter r1 and r2 in decending order");
	scanf("%d%d",&r1,&r2);
	a=r1;
	b=r2;
	while(r2>0){
		q=r1/r2;
		r=r1%r2;
		r1=r2;
		r2=r;
		s=s1-q*s2;
		s1=s2;
		s2=s;
		t=t1-q*t2;
		t1=t2;
		t2=t;
	}
	printf("GCD,s,t is=%d,%d,%d ",r1,s1,t1);
	printf("\nHence axs + bxt = gcd(a,b):: (%dx%d + %dx%d = %d)",a,s1,b,t1,r1);
}