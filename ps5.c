// write a program to do array opration : Deletion
#include<stdio.h>
void main()
{
int a[50],size,i,pos,item;
printf(" enter size of array:\n");
scanf("%d",&size);
printf("enter element:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter position:\n");
scanf("%d",&pos);
if(pos<0||pos>size)
{
printf("invalid position");
}
else
{
item=a[pos-1];
for(i=pos-1;i<size-1;i++)
{
a[i]=a[i+1];
}
size--;
printf("elements after deletion:\n");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}
}
