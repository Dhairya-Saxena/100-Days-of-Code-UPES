// Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main (){
int cp;
int sp;
printf("Enter Cost Price and Selling Price:");
scanf("%d %d", &cp, &sp);
if (sp>cp){
 int percentage=((float)(sp-cp)/cp)*100;
 printf("Profit: %d%% \n", percentage);
}
else if (cp>sp){
 int percentage=((float)(cp-sp)/cp)*100;
 printf("Loss: %d%% \n", percentage);
}
else{
 printf("No Profit, No Loss. \n");
}
return 0;
}
