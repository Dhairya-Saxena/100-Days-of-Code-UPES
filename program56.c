// Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
int main(){
  int x;
  printf("Enter a number:");
  scanf("%d", &x);
  int arr[x];
    for (int i=0; i<x; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<x; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

