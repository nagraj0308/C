#include<stdio.h>
int main()
{
char a[2][3][3] = {'g','a','t','e','s','q','u','i','z',"as"};
printf("%c ", ***a);
printf("%s ", **a);
printf("%s ", *a);
return 0;
}

