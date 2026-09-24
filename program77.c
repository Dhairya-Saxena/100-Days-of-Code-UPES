// Q77: Check if the elements on the diagonal of a matrix are distinct.
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
int min_dim=(x<y)?x:y;
   int diag[min_dim];
     for(int i = 0; i < min_dim; i++) {
       diag[i] = arr[i][i];
    }
  int distinct = 1;
  for(int i = 0; i < min_dim; i++) {
    for(int j = i + 1; j < min_dim; j++) {
       if(diag[i] == diag[j]) {
          distinct = 0;
          break;
        }
   }
     if (!distinct)
        break;
     }
     if (distinct) {
       printf("Elements on diagonal of matrix are distinct. \n");
    } else {
       printf("Elements on diagonal of matrix are not distinct. \n");
   }
return 0;
}
