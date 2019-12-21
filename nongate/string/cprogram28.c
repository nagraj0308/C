// replacement of gets....
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 128

int main()
{
  char mychar, string[SIZE];
  int i;
  int count=0;    

  printf("Please enter your string: ");
  fgets(string, SIZE, stdin);

  printf("Please enter char to find: ");
  mychar = getchar();

  for (i = 0; (string[i] != '\0'); i++)
    if (string[i] == mychar) ++count;

  printf("The char %c appears %d times in the sentence: %s" ,mychar ,count, string);

  return 0;
}

