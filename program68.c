// Q68: Delete an element from an array.
#include <stdio.h>
int main() {
 int n, i, pos;
 printf("Enter the no. of elements in array: ");
 scanf("%d", &n);
  int arr[100];
  printf("Enter elements in array: ");
   for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
   }
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for(i = 0; i < n; i++) {
     printf("%d", arr[i]);
      if(i < n - 1) {
       printf(" ");
     }
  }
 printf("\n");
return 0;
}
