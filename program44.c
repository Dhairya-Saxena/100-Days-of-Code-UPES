// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
int n;
double sum=0.0;
printf("Enter the no. of terms:");
scanf("%d", &n);
sum +=1.0;
for (int i=2; i<=n; i++) {
double numerator= 2*i-1;
double denominator= 2*i;
sum += numerator/denominator;
}
printf("Sum is %f. \n", sum);
return 0;
}
