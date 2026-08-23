// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main(){
int p;
int r;
int t;
int n=1;
printf("Enter the value of p, r and t");
scanf("%d %d %d", &p, &r, &t);
double si=(p*r*t)/100;
double a=p*pow ((1.0 + (double)r/100.0), t);
double ci=a-p;
printf("Simple Interest is %f \n", si);
printf("Compound Interest is %f \n", ci);
return 0;
}
