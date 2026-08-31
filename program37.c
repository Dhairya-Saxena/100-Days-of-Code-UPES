// Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
int a;
int b;
printf("Enter two numbers to find their LCM:");
scanf("%d %d", &a, &b);
int i=a;
int j=b;
         while (j!=0) {
 	int k=j;
	 j=i%j;
	 i=k;
 }
int hcf=i;
int lcm=(a*b)/hcf;
printf("%d \n", lcm);
return 0;
}
