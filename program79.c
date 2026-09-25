// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main(){
 int x;
printf("Enter the no. of rows: ");
scanf("%d", &x);
int y;
printf("Enter the no. of columns: ");
scanf("%d", &y);
int arr [x][y];
printf("Enter the elements: ");
 for(int i = 0; i < x; i++) {
   for(int j = 0; j < y; j++) {
     scanf("%d", &arr[i][j]);
       }
    }
 printf("Diagonal Traversal of the Matrix: \n");
  for (int sum = 0; sum <= x + y - 2; sum++) {
    for (int i = 0; i < x; i++) {
      int j = sum - i;
        if (j >= 0 && j < y) {
          printf("%d ", arr[i][j]);
       }
    }
 }
printf("\n");
return 0;
}

