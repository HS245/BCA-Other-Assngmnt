//Insertion Sort
#include<stdio.h>
void main()
{
 int a[50], i, j, k, temp, n;
 printf("\n || INSERTION SORT || \n");
 printf("\nEnter the number of elements : ");
 scanf("%d", &n);
 printf("\nEnter the elements are : ");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("\nThe elements are : \n");
 for(i=0; i<n; i++)
 {
  printf("%d\t", a[i]);
 }
 for(i=1; i<n; i++)
 {
  printf("\n    Iteration = %d\n", i+1);
  temp=a[i];
  j=i-1;
  while(temp<a[j]&&j>=0)
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=temp;
  for(k=0; k<n; k++)
  {
   printf("%d\t", a[k]);
  }
  printf("\n");
 }
 printf("\nThe sorted array is : \n");
 for(i=0; i<n; i++)
 {
  printf(" %d\t", a[i]);
 }
}
