// Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
  int main(){
    int x;
    printf("Enter the no. of rows: ");
    scanf("%d", &x);
    int y;
    printf("Enter the no. of column: ");
    scanf("%d", &y);
    int arr[x][y];
    int sum=0;
    printf("Enter the elements of matrix: ");
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            scanf("%d", &arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
printf("%d\n", sum);
return 0;
}
