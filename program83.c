// Q83: Count vowels and consonants in a string.
#include <stdio.h>
int main(){
 char str[100];
 printf("Enter a word: ");
 scanf("%s", str);
 int vow=0;
 int con=0;
 int i=0;
 while (str[i] != '\0') {
  char ch = str[i];
   if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
     vow++;
     } else {
      con++;
     }
   }
 i++;
}
printf("Vowels=%d, Consonants=%d\n", vow, con);
return 0;
}
