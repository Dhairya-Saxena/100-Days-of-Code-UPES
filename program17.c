// Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
int a;
int b;
int c;
printf("Enter three numbers");
scanf("%d %d %d", &a, &b, &c);
int d=b*b - 4*a*c;
if (d>0){
int root1=(-b + sqrt(d))/(2*a);
int root2=(+b + sqrt(d))/(2*a);
printf("Roots are real and different, %d %d \n", root1, root2);
} else if (d==0){
int root=(-b)/(2*a);
printf("Roots are real and equal, %d \n", root);
} else {
printf("Roots are complex \n");
}
return 0;
}
