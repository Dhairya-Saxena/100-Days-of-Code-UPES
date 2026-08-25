// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
int l;
int m;
int n;
printf("Enter three lengths");
scanf("%d %d %d", &l, &m, &n);
if (l==m && m==n){
printf("Equilateral \n");
} else if (l==m && m!=n || l==n && n!=m || l!=m && m==n){
printf("Isosceles \n");
} else {
printf("Scalene \n");
}
return 0;
}
