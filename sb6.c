//Binary search using a function
#include<stdio.h>
int bsearch(int ar[], int n, int low, int high);
void main()
{
  int a[50], n, key, i, result;
  printf("Enter the size of the array : \n");
  scanf("%d", &n);
  printf("Enter the elements in the sorted order : \n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("The numbers are : \n");
  for(i=0; i<n; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\nEnter the elements to be searched : \n");
  scanf("%d",&key);
  result=bsearch(a, key, 0, n-1);
  if(result==-1)
  {
    printf("Search is UNSUCCESSFUL \n");
  }
  else
  {
    printf("Element is found at position : %d\n", result+1);
  }
}
int bsearch(int ar[], int n, int low, int high)
{
  int mid;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(ar[mid]==n)
    {
     return mid;
    }
    if(ar[mid]<n)
    {
     low=mid+1;
    }
    else
    {
     high=mid-1;
    }
  }
  return -1;
}
