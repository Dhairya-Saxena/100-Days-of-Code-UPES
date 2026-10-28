// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int main()
 {
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int nums[n];
  printf("Enter elements in array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    int cand=-1, cnt=0;
    for (int i=0; i<n; i++) {
        if (cnt==0) {
            cand=nums[i];
            cnt=1;
        } else if (nums[i] == cand) {
            cnt++;
        } else {
            cnt--;
        }
    }
    cnt=0;
    for (int i=0; i<n; i++) {
        if (nums[i] == cand) {
            cnt++;
        }
    }
    if (cnt > n/2) {
        printf("%d\n", cand);
    } else {
        printf("-1\n");
    }
    return 0;
}
