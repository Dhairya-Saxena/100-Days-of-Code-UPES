// Q30: Write a program to reverse a given number.
#include <stdio.h>
int main(){
int r=0;
int n;
int rev=0;
printf("Enter the value of n:");
scanf("%d", &n);
while (n!=0)
 {
  r=n%10;
   rev=rev*10+r;
  n=n/10;
 }
printf("Reverse of n: %d \n", rev);
return 0;
}
