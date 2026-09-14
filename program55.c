// Q55. Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i, j, isPrime;
    printf("Enter a number till which to print prime numbers:");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
