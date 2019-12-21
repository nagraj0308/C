#include<stdio.h>
void max_heapify(int A[],int i);
void build_max_heap(int A[]);
int heap_size;
void main(){
	int A[]={0,1,2,3,4,5,6,7};
	heap_size=sizeof(A)/sizeof(A[0]);
	build_max_heap(A);
	
}
void build_max_heap(int A[]){
	for(int i=1;i<heap_size;i++)
		max_heapify(A,i);
}



void max_heapify(int A[],int i){
	int l=2i;
	int r=2i+1,largest;
	if(l<=heap_size && A[l]>A[i])
		largest=l;
	else 
		largest=i;
	if(r<=heap_size && A[r]>A[i])
		largest=r;
	else 
		largest=i;
	if(largest!=i){
		A[i]=A[i]+A[largest];
		A[largest]=A[i]-A[largest];
		A[i]=A[i]-A[largest];
	}
	max_heapify(A,largest);
	
}