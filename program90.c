// Q90. Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toggleCase(char str[]) {
  int length=strlen(str);
    for (int i=0; i<length; i++) {
       if (islower(str[i])) {
       str[i]=toupper(str[i]);
     } else if (isupper(str[i])) {
       str[i]=tolower(str[i]);
     }
  }
  printf("%s\n", str);
}
int main() {
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")]='\0';
  toggleCase(str);
return 0;
}
