// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>
int main(){
 int a;
 printf("Enter the no. of elements in array: ");
 scanf("%d", &a);
 int nums[a];
 printf("Enter elements in array: ");
 int totalsum = 0;
 for (int i=0; i<a; i++){
  scanf("%d", &nums[i]);
   totalsum+=nums[i];
  }
 int leftsum = 0;
 int index = -1;
  for(int i = 0; i < a; i++){
    int rightsum = totalsum-leftsum-nums[i];
        if (leftsum==rightsum){
           index = i;
           break;
         }
  leftsum+=nums[i];
 }
 printf("Pivot Index is %d\n", index);
 return 0;
}
