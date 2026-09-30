// Q91. Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
int v(char ch) {
  ch=(ch>='A' && ch<='Z')?(ch+32):ch;
  return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int j=0;
 for (int i=0; str[i]!='\0'; i++) {
  if (!v(str[i])) {
       str[j++]=str[i];
     }
  }
    str[j] = '\0';
 printf("%s\n", str);
return 0;
}
