// Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
int n;
int sum=0;
printf("Enter the number till which you want the sum of odd numbers to be printed:");
scanf("%d", &n);
 for (int i=1; i<=n; i++){
 sum+=(2*i-1);
}
 printf("%d \n", sum);
return 0;
}
