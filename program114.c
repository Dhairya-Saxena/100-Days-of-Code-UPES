// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() {
    char s[1005];
    printf("Enter string s: ");
    scanf("%s", s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }
    int maxLen = 0, left = 0;
    int len = strlen(s);
    for (int right = 0; right < len; right++) {
        unsigned char ch = s[right];
        if (lastIndex[ch] >= left) {
            left = lastIndex[ch] + 1;
        }
        lastIndex[ch] = right;
        int currLen = right - left + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
