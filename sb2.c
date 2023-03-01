#include<stdio.h>
int trans(int x[50][50], int r, int c);
int main()
{
 int r, c, i, j, a[50][50];
 printf("\n|| TRANSPOSE OF MATRIX USING FUNCTION ||\n");
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
 printf("\nDisplaying the elements of the matrix after transpose : \n");
 trans(a, r, c);
}
int trans(int a[50][50], int r, int c)
{
 int m, n;
 for(m=0; m<c; m++)
 {
  for(n=0; n<r; n++)
  {
   printf("%d\t", a[n][m]);
  }
  printf("\n");
 }
 return a[n][m];
}
