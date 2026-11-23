/// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
int maxSubarraySum(int arr[], int n) {
    int currentSum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = maxSubarraySum(arr, n);
    printf("Maximum contiguous subarray sum: %d\n", result);
    return 0;
}
