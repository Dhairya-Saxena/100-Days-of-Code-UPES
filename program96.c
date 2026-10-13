// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
 int main() {
  char l[100];
  printf("Enter a sentence: ");
  fgets(l, sizeof(l), stdin);
  l[strcspn(l, "\n")]='\0';
  int start=0;
  for (int i=0; ; i++) {
   if (l[i]==' ' || l[i]=='\0') {
    int end=i-1;
    while (start<end) {
       char temp=l[start];
       l[start]=l[end];
       l[end]=temp;
       start++;
        end--;
         }
     start=i+1;
    }
     if (l[i] == '\0') {
          break;
       }
   } 
 printf("Reversed words: %s\n", l);
 return 0;
}
