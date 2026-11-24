// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#define MAX_VAL 10005
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int visited[MAX_VAL] = {0};
    int repeated = -1;
    int found = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (!found && val >= 0 && val < MAX_VAL) {
            if (visited[val]) {
                repeated = val;
                found = 1;
            } else {
                visited[val] = 1;
            }
        }
    }
    printf("Repeated Number: %d\n", repeated);
    return 0;
}
