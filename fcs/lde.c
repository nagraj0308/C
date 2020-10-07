//Generate the solution to a linear Diophantine equation of the forma×x+b×y=c.

#include<stdio.h>
int gcd(int r1,int r2){
	int r;
	while(r2>0){
		r=r1%r2;
		r1=r2;
		r2=r;
	}
	return r1;

}
void main(){
	int a,b,c,d;
	int q,r,r1,r2;
	int s1=1,s2=0,s;
        int t1=0,t2=1,t;
	printf("Please enter a,b,c in repective order");
	scanf("%d%d%d",&a,&b,&c);
	a=r1;
	b=r2;
	d=gcd(a,b);
	if(c%d==0){
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
		printf("Particular Solution : x0=%d , y0=%d",c*s1/d,c*t1/d);
		printf("General Solution : x= %d + (k%d) , y= %d - (k%d))",c*s1/d,b/d,c*t1/d,a/d);
			
	}else{
		printf("no solution!!");
	}
	
}