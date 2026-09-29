// Q87. Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void countCharacters(char str[]) {
    int spaces=0, dg=0, sp=0;
    int length=strlen(str);
    for (int i=0; i<length; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            dg++;
        } else if (!isalnum(str[i])) {
            sp++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, dg, sp);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countCharacters(str);
    return 0;
}
