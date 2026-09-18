// Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    int freq[10] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }
    int max_freq = 0;
    int most_frequent_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }
    printf("%d\n", most_frequent_digit);
    return 0;
}
