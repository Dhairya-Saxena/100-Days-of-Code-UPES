// Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>
int main(){
 char arr[100];
 printf("Enter the full name: ");
 fgets(arr, sizeof(arr), stdin);
 printf("Initials: ");
 if (arr[0]!='\0' && arr[0]!='\n') {
   printf("%c. ", arr[0]);
  }
 for (int i=0; arr[i]!='\0'; i++) {
  if (arr[i]==' ' && arr[i+1]!='\0' && arr[i+1]!='\n') {
   printf("%c. ", arr[i+1]);
  }
}
printf("\n");
return 0;
}
