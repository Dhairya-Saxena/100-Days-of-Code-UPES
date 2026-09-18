// Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main(){
  int n, x;
     printf("Enter the no. of elements in array:");
       scanf("%d", &n);
         int arr[n];
           for (int i=0; i<n; i++)
             {
	       scanf("%d", &arr[i]);
      		}
		printf("Enter the element to search:");
		scanf("%d", &x);
		int low=0, high= n-1, found=-1;
		while (low<=high) {
 		int mid=(low+(high - low)/2);
		if (arr[mid]==x) {
		 found=mid;
		 break;
	      } else if (arr[mid]<x) {
                low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found!=-1) {
        printf("Element found at index %d (position %d).\n", found, found + 1);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
