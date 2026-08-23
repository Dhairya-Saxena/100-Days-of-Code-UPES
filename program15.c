// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(){
char a;
printf("Enter a character");
scanf("%c", &a);
int k=(int)a;
if (k>=65 && k<=90){
printf("Upperccase \n");
} else if (k>=97 && k<=127) {
printf("Lowercase \n");
} else if (k>=48 && k<=57) {
printf("Digit \n");
} else {
printf("Special Character \n");
}
return 0;
}
