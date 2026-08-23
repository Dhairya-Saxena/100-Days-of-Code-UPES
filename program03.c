// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main (){
int a;
int b;
printf("Enter two numbers");
scanf("%d %d", &a, &b);
int area=a*b;
int perimeter= 2*(a+b);
printf("Area of Rectangle is %d \n", area);
printf("Perimeter of Rectangle is %d \n", perimeter);
return 0;
}
