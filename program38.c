// Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
int a;
int sum=0;
printf("Enter a number to find the sum of it's digits");
scanf("%d", &a);
while (a>0) {
 sum=sum+a%10;
 a=a/10;
}
printf("%d \n", sum);
return 0;
}
