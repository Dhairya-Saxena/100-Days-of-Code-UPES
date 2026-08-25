// Q23: Write a program to calculate library fine based on late days as follows:
/* First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled. */
#include <stdio.h>
int main(){
int a;
printf("Enter days late:");
scanf("%d", &a);
if (a<=0){
  printf("No fine");
}
else if (a<=5){
  printf("Fine: ₹%d \n", a*2);
}
else if (a<=10 && a>5){
  printf("Fine: ₹%d \n", 10+(a-5)*4);
}
else if (a<=30 && a>10){
  printf("Fine: ₹%d \n", 30+(a-10)*6);
}
else {
printf("Membership Cancelled \n");
}
return 0;
}
