// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
void replaceSpaces(char str[]) {
    int length=strlen(str);
    for (int i=0; i<length; i++) {
        if (str[i]==' ') {
            str[i]='-';
        }
    }
  printf("%s\n", str);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    replaceSpaces(str);
 return 0;
}
