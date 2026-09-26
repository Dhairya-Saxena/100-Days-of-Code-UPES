// Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>
int main(){
 char str[100];
 printf("Enter a word: ");
 scanf("%s", str);
 int count=0;
 while (str[count]!='\0') {
  count++;
 }
printf("Length: %d \n", count);
return 0;
}
