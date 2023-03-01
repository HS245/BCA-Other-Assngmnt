#include<stdio.h>
void bsort(int b[], int r);
void main()
{
 int i,r, a[50], s;
 printf("\n ||  BUBBLE SORT with fn || \n");
 printf(" Enter the size of the array : ");
 scanf("%d", &r);
 printf("\n Enter the elements in the array : ");
 for(i=0;i<r;i++)
 {
  scanf("%d", &a[i]);
 }
 printf("\n The sorted array is : ");
 bsort(a,r);
}
void bsort(int b[50],int r)
{
 int i, j, temp, k;
 for(i=0;i<r-1;i++)
 {
  printf("\n    Iteration = %d\n", i+1);
  for(j=0; j<r-1-i; j++)
  {
   if(b[j]>b[j+1])
   {
    temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
   }
   for(k=0; k<r; k++)
   {
    printf("%d\t", b[k]);
   }
   printf("\n");
  }
 }
}
