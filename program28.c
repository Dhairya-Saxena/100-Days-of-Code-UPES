// Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
int n;
long long product=1;
printf("Enter the value till which to print product from 1 to n even numbers:");
scanf("%d", &n);
for (int i=1;i<=n;i++){
 if (i%2==0) {
   product*=i;
  }
}
printf("The product is: %lld \n", product);
return 0;
}
