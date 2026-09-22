// Q74: Find the transpose of a matrix.
#include <stdio.h>
  int main() {
   int x;
   printf("Enter the no. of rows: ");
    scanf("%d", &x);
    int y;
    printf("Enter the no. of column: ");
    scanf("%d", &y);
    int arr[x][y];
    printf("Enter the elements of the matrix: ");
    for (int i=0; i<x; i++) {
     for (int j=0; j<y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
   for (int j=0; j<y; j++) {
      for (int i=0; i<x; i++) {
      printf("%d ", arr[i][j]);
        }
     printf("\n");
   }
return 0;
}
