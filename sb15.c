//Merging two 1D array

#include<stdio.h>
void main()
{
 int a[50], b[50], sa, sb, i, j, c[50];
 printf("Enter the size of the first array : ");
 scanf("%d", &sa);
 printf("Enter elements : ");
 for(i=0; i<sa; i++)
 {
   scanf("%d", &a[i]);
 }
 printf("Enter the size of the second array : ");
 scanf("%d", &sb);
 printf("Enter elements : ");
 for(j=0; j<sb; j++)
 {
   scanf("%d", &b[j]);
 }
 for(i=0;i<sa; i++)
 {
   c[i]=a[i];
 }
 for(j=0; j<sb; j++)
 {
   c[i]=b[j];
   i++;
 }
 
 for(i=0; i<sa+sb; i++)
 {
   printf("%d\t", c[i]);
 }
}
