//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
int x;
printf("Enter an integer");
scanf("%d", &x);
if (x%2==0){
printf("%d is an even number", x);
} else {
printf("%d is an odd number", x);
}
return 0;
}
