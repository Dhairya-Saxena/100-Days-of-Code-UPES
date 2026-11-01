// Q108. Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
 void productexceptself(int *x, int xsize, int *aw) {
  aw[0]=1;
  for (int i=1; i<xsize; i++)
   {
     aw[i]=aw[i-1]*x[i-1];
    }
   int rp=1;
   for (int i=xsize-1; i>=0; i--)
    {
      aw[i]=aw[i]*rp;
      rp*=x[i];
    }
  }
  int main()
   {
     int n;
     printf("Enter the number of elements in array: ");
     scanf("%d", &n);
     int x[n];
     printf("Enter the elements in array: ");
     for (int i=0; i<n; i++) {
       scanf("%d", &x[i]);
      }
    int aw[n];
    productexceptself(x, n, aw);
    printf("Output: ");
    for (int i=0; i<n; i++) {
     printf("%d%s", aw[i],(i==n-1) ? "":", ");
    }
   printf("\n");
  return 0;
}
