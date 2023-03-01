#include<stdio.h>
void main()
{
 int a[100], i, r, max=0, min;
 printf("\n| PROGRAM TO FIND LARGEST AND SMALLEST NUMBER |\n");
 printf("\nEnter the range of the array : ");
 scanf("%d", &r);
 printf("Enter in the array : ");
 for(i=0; i<r; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("The entered 1D array is : ");
 for(i=0; i<r; i++)
 {
  printf("%d\t", a[i]);
 }
 printf("\n\nThe largest number in the array is : ");
 for(i=0; i<r; i++)
 {
  if(a[i]>max)
  {
    max=a[i];
  }
 }
  printf("%d", max);
  printf("\nThe smallest number in the array is : ");
  min=max;
  for(i=0; i<r; i++)
  {
   if(a[i]<min)
   {
     min=a[i];
   }
  }
  printf("%d\n", min);
}
