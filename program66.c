// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main(){
int n;
 printf("Enter the no. of elements in the array:");
 scanf("%d", &n);
 int arr[n+1];
 printf("Enter the elements in array");
 for (int i=0;i<n;i++) {
  scanf("%d", &arr[i]);
 }
int m, i=n-1;
 printf("Enter the number to insert in the array:");
 scanf("%d", &m);
 while(i>=0 && arr[i]>m) {
  arr[i+1] = arr[i];
   i--;
  }
 arr[i+1]=m;
n++;
for (int j=0; j<n; j++) {
 printf("%d", arr[j]);
  if (j<n-1) {
   printf(" ");
  }
 }
printf("\n");
return 0;
}
