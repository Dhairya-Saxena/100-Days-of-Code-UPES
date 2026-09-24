// Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
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
 int sum=0;
 int min_dim = (x<y)?x:y;
    for (int i=0; i<min_dim; i++) {
        sum=sum+arr[i][i];
    }
 printf("Sum of main diagonal elements: %d \n", sum);
return 0;
}
