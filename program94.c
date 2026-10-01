// Q94: Find the Longest Word in a Sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char current_word[50];
    char longest_word[50] = "";
    int j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            current_word[j] = '\0';
            if (strlen(current_word) > strlen(longest_word)) {
                strcpy(longest_word, current_word);
            }
            j = 0;
        } else {
            current_word[j] = str[i];
            j++;
        }
    }
 printf("Longest Word: %s\n", longest_word);
 return 0;
}
