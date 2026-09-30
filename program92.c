// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>
int main() {
 char b[100];
 printf("Enter a string: ");
 scanf("%s", b);
 int fnd=0;
 for (int i=0; b[i]!='\0'; i++) {
     if (b[i]>='a' && b[i]<='z') {
        for (int j=i+1; b[j]!='\0'; j++) {
           if (b[i]==b[j]) {
              printf("%c\n", b[i]);
              fnd = 1;
              break;
            }
        }
        if (fnd) {
        break;
      }
    }
  }
return 0;
}
