// Q57: Find the sum of array elements.
#include <stdio.h>
int main(){
   int i,j, sum=0;
    scanf("%d", &i);
      int arr[i];
        for (j = 0; j < i; j++) {
         scanf("%d", &arr[i]);
         sum += arr[i];
       }
    printf("%d\n", sum);
  return 0;
}
