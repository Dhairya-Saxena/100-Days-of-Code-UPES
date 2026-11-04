// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
void FirstNegative (int arr[], int x, int k) {
  int queue[x];
  int ft=0, re=0;
  for (int i=0; i<k; i++) {
     if (arr[i] < 0) {
        queue[re++]=i;
	}
     }
  for (int i=k; i<x; i++) {
     if (ft < re) {
        printf("%d ", arr[queue[ft]]);
     } else {
        printf("0 ");
     }
     while (ft < re && queue[ft] <= i - k) {
        ft++;
     }
     if (arr[i] < 0) {
        queue[re++]=i;
     }
  }
  if (ft < re) {
     printf("%d\n", arr[queue[ft]]);
  } else {
     printf("0\n");
  }
}

int main() {
  int x, k;
  printf("Enter the number of elements in array: ");
  scanf("%d", &x);
  int arr[x];
  printf("Enter the elements in array: ");
  for (int i=0; i<x; i++) {
     scanf("%d", &arr[i]);
  }
  printf("Enter the window size: ");
  scanf("%d", &k);
  FirstNegative(arr, x, k);
  return 0;
}
