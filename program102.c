// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int main() {
 int n;
 printf("Enter the size of the array: ");
 scanf("%d", &n);
 int arr[100];
 printf("Enter %d sorted elements:\n", n);
  for (int i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
    }
 int x;
 printf("Enter the value of x: ");
 scanf("%d", &x);
  int low = 0;
  int high = n-1;
  int ans = -1;
    while (low <= high) {
        int mid = low+(high-low)/2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
   printf("Output: %d\n", ans);
  return 0;
}
