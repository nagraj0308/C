#include <stdio.h>
#include <string.h>
int main() {
  int i, j, temp; 
  char s[]="Once a jolly swagman";
  i=0;
  j=strlen(s) - 1;  
  while(i < j) {
    temp = s[i];
    s[i++] = s[j];
    s[j--] = temp;
  }
  printf("\n\n New string is: %s", s);
  printf("\n\n\t\t\t     press enter when ready");
  i = getchar();
  return 0;
}

/*void strReverse(char* str){

    int length = strlen(str);

    char temp;

    for(int i = 0, j = length-1;i < (length-1)/2; i++, j--){

        temp = str[i];

        str[i]=str[j];

        str[j] = temp;

    }

    return;

} */

