// Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
 char date[15];
 int d, m, y;
 printf("Enter Day, Month and Year: ");
 if (scanf("%s", date) != 1) {
   return 0;
  }
 const char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  if (sscanf(date, "%d/%d/%d", &d, &m, &y) == 3) {
     if (m >= 1 && m <= 12) {
        printf("%02d-%s-%d\n", d, months[m], y);
     }
  }
 return 0;
}
