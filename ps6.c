//write a PROGRAM TO DO  array  OPERATION :sorting
#include<stdio.h>
void main()
{
int a[50],size,i,item,j,temp;
	printf("enter the size of array:\n");
	scanf("%d",&size);
	printf("enter elements in array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
	for(j=i+1;j<size;j++)
	{
	if(a[i]<a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	printf("the sorted element in descending order:\t");
	for(i=0;i<size;i++)
	{
	printf("%d\t",a[i]);
	}
	}
