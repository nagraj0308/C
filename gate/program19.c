# include <stdio.h>
void fun(int x)
{
x = 30;
}
int main()
{
int y = 20;
fun(y);
printf("%d", y);
return 0;
}
