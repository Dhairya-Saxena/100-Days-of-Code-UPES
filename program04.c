// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define pi 3.1415
int main (){
int r;
printf("Enter radius");
scanf("%d", &r);
int area=pi*r*r;
int perimeter=2*pi*r;
printf("Area of Circle is %d \n", area);
printf("Perimeter of Circle is %d \n", perimeter);
return 0;
}
