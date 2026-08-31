// Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
int n;
int rev=0;
printf("Enter a sequence of numbers to check whether they are in a palindrome");
scanf("%d", &n);
for (int i=n; i>0; i=i/10) {
	rev=rev*10+(i%10);
}
if (n==rev){
printf("Palindrome \n");
} else {
printf("Not Palindrome \n");
}
return 0;
}
