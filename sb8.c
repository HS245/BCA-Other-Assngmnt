//Selection sort with showing the the iterations.
#include<stdio.h>
void main()
{
  int i, j, a[50], n, temp, k;
  printf("\n || SELECTION SORT || \n");
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  printf("Enter elements : ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("The elements are : ");
  for(i=0; i<n; i++)
  {
    printf("%d\t", a[i]);
  }
  for(i=0; i<n-1; i++)
  {
   printf("\n Iteration = %d\n", i+1);
   for(j=i+1; j<n; j++)
   {
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
     for(k=0; k<n; k++)
     {
       printf("%d\t", a[k]);
     }
     printf("\n");
   }
  }
  printf("\n Sorted array is : \n");
  for(i=0; i<n; i++)
  {
    printf("%d\t", a[i]);
  }
}
