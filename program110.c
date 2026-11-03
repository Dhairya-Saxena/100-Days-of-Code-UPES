// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
void printMaxWin(int arr[], int n, int k) {
    int dq[n];
    int ft=0, re=-1;
    for (int i=0; i<n; ++i) {
        if (ft<=re && dq[ft]<=i-k) {
            ft++;
        }
        while (ft<=re && arr[dq[re]]<=arr[i]) {
            re--;
        }
        dq[++re]=i;
        if (i>=k-1) {
            printf("%d ", arr[dq[ft]]);
        }
    }
    printf("\n");
}

int main() {
    int n, k;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the window size (k): ");
    scanf("%d", &k);
    if (k>n || k<=0) {
        printf("Invalid window size!\n");
        return 0;
    }
    printf("Output: ");
    printMaxWin(arr, n, k);
    return 0;
}