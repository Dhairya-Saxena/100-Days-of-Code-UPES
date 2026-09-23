//Q75: Add two matrices.
#include <stdio.h>
int main() {
 int a;
 printf("Enter rows of the first matrix: ");
 scanf("%d", &a);
 int b;
 printf("Enter columns in first matrix: ");
 scanf("%d", &b);
 int array1[a][b];
 printf("Enter elements of matrix 1: ");
   for (int i=0; i<a; i++) {
      for (int j=0; j<b; j++) {
         scanf("%d", &array1[i][j]);
      }
   }
 int m;
 printf("Enter rows of the second matrix: ");
 scanf("%d", &m);
 int n;
 printf("Enter columns in second matrix: ");
 scanf("%d", &n);
 int array2[m][n];
 printf("Enter elements of second matrix: ");
   for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
         scanf("%d", &array2[i][j]);
      }
   }
    for (int i=0; i<a; i++) {
      for (int j=0; j<b; j++) {
         printf("Sum of Matrices: %d  ", array1[i][j]+array2[i][j]);
      }
   printf("\n");
}
return 0;
}
