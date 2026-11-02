// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
 long long maxiSum(int arr[], int x, int k) {
   long long sum=0;
   long long max=0;
     for (int i=0; i<x; i++)
      {
        sum=sum+arr[i];
	if (i >= k) {
		sum=sum-arr[i-k];
	       }
	if (i >= k-1 && sum>max) {
		max=sum;
  	     }
         }
     return max;
   }
  int main() {
    int x;
    int k; // k represents the fixed size of the subarray
    printf("Enter the number of elements and fixed size of subarray: ");
    scanf("%d %d", &x, &k);
    int arr[x];
    printf("Enter elements in array: ");
      for (int i=0; i<x; i++) {
	scanf("%d", &arr[i]);
      }
    printf("Maximum sum of subarray of size %d: %lld\n", k, maxiSum(arr, x, k));
   return 0;
}
