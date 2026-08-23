// Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main (){
int a=3;
int b=5;
int c=0;
printf("Before Swapping a and b is %d %d \n", a, b);
c=a;
a=b;
b=c;
printf("After Swapping a and b is %d %d \n", a, b);
return 0;
}

