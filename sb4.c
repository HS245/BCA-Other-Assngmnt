#include<stdio.h>
void main()
{
 int a[50], i, key, n;
 printf("\n  LINEAR SEARCH PROGRAM \n");
 printf("\n Enter the number of items : ");
 scanf("%d", &n);
 printf("\n Enter the items : \n");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("\n Items are : \n");
 for(i=0; i<n; i++)
 {
  printf("%d\t", a[i]);
 }
 printf("\n Enter the items to be searched : ");
 scanf("%d", &key);
 for(i=0; i<n; i++)
 {
    if(a[i]==key)
    {
      printf(" %d is present in %d position\n", key, i+1);
      break;
    }
 }
 if(i==n)
 {
    printf(" Item is not present \n");
 }
}
