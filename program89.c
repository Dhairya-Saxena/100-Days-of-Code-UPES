// Q89: Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>
int countCharacter(char str[], char ch) {
  int count=0;
  int length=strlen(str);
  for (int i=0; i<length; i++) {
      if (str[i]==ch) {
            count++;
      }
  }
return count;
}
int main() {
   char str[100];
   char ch;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   str[strcspn(str, "\n")]='\0';
   printf("Enter character to find: ");
  scanf("%c", &ch);
int frequency=countCharacter(str, ch);
printf("%d\n", frequency);
return 0;
}
