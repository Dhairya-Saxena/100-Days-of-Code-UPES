// Q35: Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
int n;
printf("Enter a number to print all of it's factors:");
scanf("%d", &n);
printf("The factors of %d are: \n", n);
for (int i=1; i<=n; i++) {
 if (n%i==0) {
  printf("%d ", i);
 }
}
printf("\n");
return 0;
}
