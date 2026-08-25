// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
int i;
int j;
char k;
printf("Enter two integers and a mathematical operator:");
scanf("%d %d %c", &i, &j, &k);
switch (k){
 case '+':
  printf("%d \n", i+j);
 break;
 case '-':
  printf("%d \n", i-j);
 break;
 case '*':
  printf("%d \n", i*j);
 break;
 case '/':
  printf("%d \n", i/j);
 break;
 case '%':
  printf("%d \n", i%j);
 break;
 default:
  printf("Invalid Operator \n");
}
return 0;
}
