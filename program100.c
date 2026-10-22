// Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
 char str[1000];
 printf("Enter a string: ");
 scanf("%s", str);
 int n=strlen(str);
 int f=1;
 for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
       if (!f) {
         printf(",");
       }
      f=0;
     for (int k=i; k<=j; k++) {
        printf("%c", str[k]);
      }
    }
  }
 printf("\n");
 return 0;
}
