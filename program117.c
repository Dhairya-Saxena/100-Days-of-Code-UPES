// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
int main() {
    int m, n;
    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter %d sorted elements for first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    printf("Enter size of second array (n): ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d sorted elements for second array: ", n);
    for (int j = 0; j < n; j++) {
        scanf("%d", &nums2[j]);
    }
    int merged[m+n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    while (j < n) {
        merged[k++] = nums2[j++];
    }
    printf("Merged array: ");
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d", merged[idx]);
        if (idx < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
