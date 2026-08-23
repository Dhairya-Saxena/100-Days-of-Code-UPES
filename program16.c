// Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("Enter three numbers");
scanf("%d %d %d", &a, &b, &c);
if (a>b && a>c){
printf("Largest is %d \n", a);
} if (b>a && b>c){
printf("Largest is %d \n", b);
} else {
printf("Largest is %d \n", c);
}
return 0;
}
