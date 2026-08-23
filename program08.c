// Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main (){
int n;
printf("Enter the value of n");
scanf("%d",&n);
int sum=(n+1)*n/2;
printf("The sum of first n natural numbers is %d \n", sum);
return 0;
} 
