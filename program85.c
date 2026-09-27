// Q85. Reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  printf("Enter a word: ");
  scanf("%s", str);
  int i = 0;
  int j = strlen(str) - 1;
  while (i < j) {
     char temp = str[i];
     str[i] = str[j];
     str[j] = temp;
     i++;
     j--;
  }
printf("Reversed String: %s \n", str);
return 0;
}

