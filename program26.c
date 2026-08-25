// Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>
int main(){
int n;
int i=1;
printf("Enter a number till which you want numbers to be printed:");
scanf("%d", &n);
while (i<=n){
  printf("%d ", i);
  i++ ;
}
printf("\n");
return 0;
}
