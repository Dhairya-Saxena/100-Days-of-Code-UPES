// Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
int x;
int binary=0;
int p=1;
printf("Enter a decimal number to convert it into binary");
scanf("%d", &x);
for (int i=x; i>0; i=i/2) {
 int r=i%2;
binary= binary + r*p;
p=p*10;
}
printf("Binary: %d \n", binary);
return 0;
}
