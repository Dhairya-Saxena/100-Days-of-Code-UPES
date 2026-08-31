// Q34: Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>
int main(){
int a;
int p=1;
printf("Enter a number to check if it's prime or not");
scanf("%d", &a);
for (int i=2; i<=sqrt(a); i++) {
 if (a%i==0) { 
   p=0;
  break;
 }
} // end of for loop
 if (p) {
 printf("Prime \n");
} else {
 printf("Not Prime \n");
}
return 0;
}
