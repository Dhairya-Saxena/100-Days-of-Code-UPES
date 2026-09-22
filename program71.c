// Q71: Read and print a matrix.
#include <stdio.h>
  int main() {
   int i;
   printf("Enter the no. of rows: ");
   scanf("%d", &i);
   int j;
   printf("Enter the no. of columns: ");
   scanf("%d", &j);
   int arr[i][j];
   printf("Enter the elements of matrix: ");
    for (int k=0; k<i; k++) {
     for (int l=0; l<i; l++) {
      scanf("%d", &arr[k][l]);
     }
   }
  printf("The matrix is: \n");
   for (int k=0; k<i; k++) {
      for (int l=0; l<i; l++) {
        printf(" %d  ", arr[k][l]);
      }
    printf("\n");
  }
return 0;
}
