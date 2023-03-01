// write a program to show traversal of array
#include<stdio.h>
int main()
{
int size,a[50],i;
printf("enter the size of array:\n");
scanf("%d",&size);
printf("enter element:");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("element present inside array:\t");
for(i=0;i<size;i++)
printf("%d\t",a[i]);
return 0;
}
