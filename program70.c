// Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the positions to rotate: ");
    scanf("%d", &k);
    k=k%n;
    int s=0, e=n-1;
    while (s<e) {
    int t = arr[s]; arr[s] = arr[e]; arr[e] = t; s++; e--;
    }
    s = 0; e = k - 1;
    while (s<e) {
    int t = arr[s]; arr[s] = arr[e]; arr[e] = t; s++; e--;
    }
    s = k; e = n - 1;
    while (s<e) {
    int t = arr[s]; arr[s] = arr[e]; arr[e] = t; s++; e--;
    }
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
