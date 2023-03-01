// Insertion Case 2: first position
#include<stdio.h>
void main()
{
int a[50],size,i,pos,num;
printf("enter the size of the array:\n");
scanf("%d",&size);
printf("enter the element:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter new value:\n");
scanf("%d",&num);
for(i=size-1;i>=0;i--)
{
a[i+1]=a[i];
}
a[0]=num;
size++ ;
printf("element of the insertion:\t");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}
