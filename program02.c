// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main (){
int a;
int b;
printf("Enter two numbers");
scanf("%d %d", &a, &b);
int sum=a+b;
int diff=a-b;
int pro=a*b;
int div=a/b;
printf("The sum is %d \n", sum);
printf("The difference is %d \n", diff);
printf("The product is %d \n", pro);
printf("The quotient is %d \n", div);
return 0;
}
