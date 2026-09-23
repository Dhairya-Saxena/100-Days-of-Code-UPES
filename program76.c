// Q76. Check if a matrix is symmetric.
#include <stdio.h>
int main(){
  int a;
  printf("Enter rows of the matrix: ");
 scanf("%d", &a);
 int b;
 printf("Enter columns of the matrix: ");
 scanf("%d", &b);
 int arr[a][b];
 printf("Enter elements of the matrix: ");
   for (int i=0; i<a; i++) {
      for (int j=0; j<b; j++) {
         scanf("%d", &arr[i][j]);
      }
   }
 int symm=1;
  if (a!=b) {
     symm=0;
  } else {
     for (int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
           if (arr[i][j]!=arr[j][i]) {
              symm=0;
          break;
        }
     }
   if (!symm) {
     break;
  }
}
} if (symm) {
    printf("Matrix is symmetric \n");
 } else {
    printf("Matrix is not symmetric \n");
  }
return 0;
}


