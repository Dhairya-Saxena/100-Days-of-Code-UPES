// Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  printf("Enter a word to check if it is palindrome: ");
  scanf("%s", str);
  int i=0;
  int j=strlen(str) - 1;
  int p=1;
    while (i<j) {
       if (str[i]!=str[j]) {
            p=0;
        break;
      }
  i++;
  j--;
}
  if (p) {
      printf("Palindrome. \n");
    } else {
      printf("Not palindrome. \n");
    }
return 0;
}
