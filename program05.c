// Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main (){
int c;
printf("Enter Celsius Value");
scanf("%d", &c);
int f=(c*9/5)+32;
printf("The Fahrenheit Value is %d \n", f);
return 0;
}
