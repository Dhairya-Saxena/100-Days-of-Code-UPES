
// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
int a;
int b;
printf("Enter two numbers to find their HCF");
scanf("%d %d", &a, &b);
while (b!=0) {
 int i=b;
 b=a%b;
 a=i;
}
printf("HCF is: %d \n", a);
return 0;
}
