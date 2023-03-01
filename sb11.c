//Insertion Sort using fn
#include<stdio.h>
void inS(int a[], int r); 
void main()
{
 int a[50], i, n;
 printf("\n || INSERTION SORT using fn || \n");
 printf("\nEnter the number of elements : ");
 scanf("%d", &n);
 printf("\nEnter the elements are : ");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 inS( a, n);
}
void inS(int a[], int r)
{
 int i, j, k, temp;
 printf("\nThe elements are : \n");
 for(i=0; i<r; i++)
 {
  printf("%d\t", a[i]);
 }
 for(i=1; i<r; i++)
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
  for(k=0; k<r; k++)
  {
   printf("%d\t", a[k]);
  }
  printf("\n");
 }
 printf("\nThe sorted array is : \n");
 for(i=0; i<r; i++)
 {
  printf(" %d\t", a[i]);
 }
}
