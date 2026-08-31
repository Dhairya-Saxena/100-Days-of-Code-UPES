// Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
int a;
int sum=0;
printf("Enter a number to check whether it's an Armstrong number or not:");
scanf("%d", &a);
for (int b=a; b>0; b=b/10) {
   int r=b%10;
  sum=sum+r*r*r;
}
 if (a==sum) {
 printf("Armstrong \n");
} else {
 printf("Not Armstrong \n");
}
return 0;
}
