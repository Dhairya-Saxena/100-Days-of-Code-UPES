//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main (){
int ts;
printf("Enter time in seconds");
scanf("%d", &ts);
int hr=ts/3600;
int min=(ts%3600)/60;
int sec=ts%60;
printf("Formatted Time: %d:%d:%d \n", hr, min, sec);
return 0;
}
