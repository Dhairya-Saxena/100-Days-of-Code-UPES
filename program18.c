// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
/* 90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F. */
#include <stdio.h>
int main(){
int p;
printf("Enter a percentage in numbers");
scanf("%d", &p);
if (p>89 && p<101){
printf("Grade A \n");
} else if (p>79 && p<90) {
printf("Grade B \n");
} else if (p>69 && p<80) {
printf("Grade C \n"); 
} else if (p>59 && p<70) {
printf("Grade D \n");
}  else  {
printf("Grade F \n");
}
return 0;
}
