// Insertion case 1: specific position
#include<stdio.h>
void main()
{
int a[50],size,i,pos,num;
printf("enter the size of the array:\n");
scanf("%d",&size);
printf("enter the element:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter new value");
scanf("%d",&num);
printf("enter position:");
scanf("%d",&pos);
if( pos<0|| pos>size+1)
{
printf("it is invalid position");
}
else
{
for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;
size++ ;
printf("element of the insertion:");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}
}
