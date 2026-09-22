// Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
  int main(){
    int x;
    printf("Enter the no. of rows: ");
    scanf("%d", &x);
    int y;
    printf("Enter the no. of column: ");
    scanf("%d", &y);
    int arr[x][y];
    int rowSum[x];
    printf("Enter the elements of the matrix: ");
    for (int i=0; i<x; i++) {
        rowSum[i]=0;
        for (int j=0; j<y; j++) {
          scanf("%d",&arr[i][j]);
          rowSum[i]=rowSum[i]+arr[i][j];
      }
   }
  printf("\nSum of each row:\n");
  for (int i=0; i<x; i++) {
    printf("Row %d sum = %d\n", i+1, rowSum[i]);
    }
return 0;
}
