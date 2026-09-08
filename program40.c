// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main(){
long long binary, temp;
 long long comp=0;
long long value=1;
printf("Enter a binary number");
scanf("%lld", &binary);
temp = binary;
while(temp>0) {
int rem=temp%10;
 if (rem==0) {
  comp +=1*value;
 } else if (rem==1) {
  comp +=0*value;
}
value *= 10;
temp /= 10;
}
printf("%lld \n", comp);
return 0;
}
