//  Array case3: insertion at the end of the array
#include<stdio.h>
int main()
{
	int a[50],size,i,item;
	printf("enter the size of array:\n");
	scanf("%d",&size);
	printf("enter elements in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("insert element in array:");
	scanf("%d",&item);
	size=size+1;
	a[size-1]=item;
	printf("after insertion element at the ending of array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
