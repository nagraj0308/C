#include<stdio.h>
void fun(int *arr)
{
int i,*p;
char *c;
void *v;
int arr_size = sizeof(arr)/sizeof(arr[0]);
printf("%lu ",sizeof(arr));
//for (i = 0; i < arr_size; i++)
printf("%d ",arr[0]);
printf("%lu ",sizeof(arr));
printf("%lu ",sizeof(arr[0]));
printf("%lu ",sizeof(p));
printf("%lu ",sizeof(c));
printf("%lu ",sizeof(v));
}
int main()
{
int i;
int arr[4] = {10, 20 ,30, 40};
printf("%lu ",sizeof(arr));
fun(arr);
}
