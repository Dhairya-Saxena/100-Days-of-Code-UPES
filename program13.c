// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
int year;
printf("Enter an year");
scanf("%d", &year);
if (year%4==0){
printf("Leap Year \n");
} else {
printf("Not a Leap Year \n");
}
return 0;
}
