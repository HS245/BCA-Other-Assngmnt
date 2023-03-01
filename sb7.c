//Bubble sort showing all the intermediate steps
#include<stdio.h>
void main()
{
 int i, r, j, k, a[50], temp;
 printf("\n ||  BUBBLE SORT  || \n");
 printf(" Enter the size of the array : ");
 scanf("%d", &r);
 printf("\n Enter the elements in the array : ");
 for(i=0;i<r;i++)
 {
  scanf("%d", &a[i]);
 }
 for(i=0; i<r-1; i++)
 {
  printf("\n    Iteration = %d\n", i+1);
  for(j=0; j<r-1-i; j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
    for(k=0; k<r; k++)
   {
    printf("%d\t", a[k]);
   }
   printf("\n");
   }
  }
  printf("\n The sorted array is : ");
  for(i=0; i<r; i++)
  {
   printf("%d\t", a[i]);
  }
   printf("\n");
}
 
 
