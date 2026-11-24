// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nums[n];
    long long actualSum = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }
    long long expectedSum = (long long)n * (n + 1) / 2;
    int missing = (int)(expectedSum - actualSum);
    printf("Missing: %d\n", missing);
    return 0;
}
