#include<stdio.h>
void main ( )
{
static char a[3][4] = {"abcd", "mnop", "fghi"};
putchar(**a);
puts(*a);

char b[3][4] = {"abcd", "mnop", "fghi"};
putchar(**b);
puts(*b);
}
