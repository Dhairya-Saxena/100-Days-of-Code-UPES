// Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
 char x[100];
 printf("Enter a string: ");
 scanf("%s", x);
 char y[100];
 printf("Enter another string: ");
 scanf("%s", y);
 if ( strlen(x)!=strlen(y) || strlen(x)==0) {
  printf("Not a rotation. \n");
  return 0;
}
 char z[500];
 strcpy (z, x);
 strcat (z, x);
 if (strstr(z, y)!=NULL) {
   printf("Yes, it is a rotation. \n");
  } else {
   printf("Not a rotation. \n");
  }
 return 0;
}
