# include <stdio.h>
int main()
{
char str1[] = "Ravindras";
char str2[] = {'R', 'a', 'v', 'i', 'n', 'd', 'r', 'a', 's'};
int n1 = sizeof(str1)/sizeof(str1[0]);
int n2 = sizeof(str2)/sizeof(str2[0]);
printf("n1 = %d, n2 = %d", n1, n2);
return 0;
}
