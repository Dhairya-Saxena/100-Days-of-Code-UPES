// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main(){
 char arr[100];
 printf("Enter the full name: ");
 fgets(arr, sizeof(arr), stdin);
 size_t len=strlen(arr);
 if (len>0 && arr[len-1]=='\n') {
     arr[len - 1] = '\0';
   }
 int ls=-1;
 for (int i=0; arr[i]!='\0'; i++) {
   if (arr[i]==' ') {
       ls=i;
     }
  }
 int b=1;
 for (int i=0; i<ls; i++) {
  if (arr[i]==' ') {
     b=1;
   } else {
           if (b && arr[i]!='.') {
              printf("%c. ", arr[i]);
                b=0;
            }
        }
    }
  printf("%s\n", &arr[ls+1]);
    return 0;
}
