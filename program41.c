// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main(){
int n, temp, first, last, divisor = 1, middle, swapped;
printf("Enter an integer: ");
scanf("%d", &n);
if (n >= 0 && n < 10) {
printf("Number after swapping first and last digit: %d\n", n);
}
last = n % 10;
temp = n;
while (temp >= 10) {
divisor *= 10;
temp /= 10;
}
first = temp;
middle = (n % divisor) / 10;
swapped = last * divisor + middle * 10 + first;
 printf("Number after swapping first and last digit: %d\n", swapped);
 return 0;
}
