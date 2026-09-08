// Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
int a;
int b;
int product=1;
printf("Enter a number to find product of it's odd digits");
scanf("%d", &a);
while (a>0) {
 b=a%10;
 if (b%2!=0) {
  product=product*b;
 }
a=a/10;
}
printf("%d \n", product);
return 0;
}

