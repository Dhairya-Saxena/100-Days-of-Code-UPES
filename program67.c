// Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
 int n, i, pos, val;
 printf("Enter the no. of elements in array:");
 scanf("%d", &n);
 int arr[100];
 printf("Enter elements in array:");
 for(i = 0; i < n; i++) {
   scanf("%d", &arr[i]);
  }
   printf("Enter position and value to insert:");
   scanf("%d %d", &pos, &val);
   for(i = n; i > pos; i--) {
   arr[i] = arr[i - 1];
   }
    arr[pos] = val;
    n++;
    for(i = 0; i < n; i++) {
     printf("%d", arr[i]);
     if(i < n - 1) {
      printf(" ");
       }
     }
   printf("\n");
  return 0;
}
