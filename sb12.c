//Selection sort with showing the iterations using fn.
#include<stdio.h>
void Ss(int a[], int r);
void main()
{
  int i, j, a[50], n, temp, k;
  printf("\n || SELECTION SORT using fn || \n");
  printf("\nEnter the number of elements : ");
  scanf("%d", &n);
  printf("Enter the elements : ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  Ss( a, n);
}
void Ss(int a[], int r)
{ 
  int i, j, k, temp=0;
  printf("The elements are : ");
  for(i=0; i<r; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\n");
  for(i=0; i<r-1; i++)
  {
   printf("\n Iteration = %d\n", i+1);
   for(j=i+1; j<r; j++)
   {
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
     for(k=0; k<r; k++)
     {
       printf("%d\t", a[k]);
     }
     printf("\n");
   }
  }
  printf("\n Sorted array is : \n");
  for(i=0; i<r; i++)
  {
    printf("%d\t", a[i]);
  }
}
