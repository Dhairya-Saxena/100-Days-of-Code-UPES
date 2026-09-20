// Q69: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the no. of elements in array: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Array must have 2 elements at minimum.\n");
        return 0;
    }
    int arr[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second_largest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    printf("Second Largest element: %d\n", second_largest);
    return 0;
}
