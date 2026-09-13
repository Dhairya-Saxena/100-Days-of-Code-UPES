// Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main() {
    int n = 4, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
