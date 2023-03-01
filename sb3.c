#include<stdio.h>
int d(int a[50][50], int r, int c);
int main()
{
 int r, c, i, j, a[50][50], sum;
 printf("\n||  ADDITION OF DIAGONAL ELEMENTS  ||\n");
 printf("\nEnter the size of the matrix (row, column) : ");
 scanf("%d%d", &r, &c);
 printf("Enter the elements in the matrix : ");
 for(i=0; i<r; i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d", &a[i][j]);
  }
 }
 printf("Displaying the elements of the matrix : \n");
 for(i=0; i<r; i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t", a[i][j]);
  }
  printf("\n");
 }
 sum=d( a, r, c);
 printf("\nAfter addition of the diagonal elements : %d\n", sum);
}
int d(int a[50][50], int r, int c)
{
int i, j, sum=0;
  for(i=0; i<r; i++)
 {
  for(j=0;j<c;j++)
  {
   if(i==j)
   {
    sum+=a[i][j];
   }
  }
 }
 return sum;
}
