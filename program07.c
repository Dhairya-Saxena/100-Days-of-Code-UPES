// Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main (){
int a=10;
int b=20;
printf("Before Swapping a and b is %d %d \n", a, b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swapping a and b is %d %d \n", a, b);
return 0;
}

