//WAP to insert random element, sort then perform BSearch.
#include<stdio.h>
void sort(int a[], int r);
int bs(int a[], int n, int l, int h);

void main()
{
 int a[50], i, size, pos, nv, result, key, c;
 printf("\n || ARRAY INPUT/OUTPUT ||\n");
 printf("Enter the size of the array : ");
 scanf("%d", &size);
 printf("Enter in the array of size %d : ", size);
 for(i=0; i<size; i++)
 {
  	scanf("%d", &a[i]);
 }
 
 printf("The elements in the array : \n");
 for(i=0; i<size; i++)
 {
  	printf("%d\t", a[i]);
 }
 
 printf("\nEnter a position for element insertion : ");
 scanf("%d", &pos);
 printf("Enter a new value for the position %d : ", pos);
 scanf("%d", &nv);
 if(pos<0 || pos>size+1)
 {
  	printf("INVALID POSITION");
 }
 else
 {
  	for(i=size-1; i>=pos-1; i--)
  	{
   		a[i+1]=a[i];
  	}
  	a[pos-1]=nv;
  	size++;
  	printf("Elements after insertion : \n");
  	for(i=0; i<size; i++)
  	{
   		printf("%d\t", a[i]);
  	}
 }
 sort(a, size);
}
 
void sort(int a[], int r)
{
  int i, j, temp, key, result;
  for(i=0; i<r-1; i++)
  {
  	for(j=i+1; j<r; j++)
  	{
     		if(a[i]>a[j])
     		{
       		temp=a[i];
       		a[i]=a[j];
       		a[j]=temp;
     		}
  	}
  }
  printf("\n Sorted array is : \n");
  for(i=0; i<r; i++)
  {
    printf("%d\t", a[i]);
  }
 
  printf("\n || BINARY SEARCH || \n");
  printf("Enter the element to be searched : ");
  scanf("%d", &key);
 
  result=bs(a, key, 0, r-1);
  if(result==-1)
  {
  	printf("Search is unsuccessfull\n");
  }
  else
  {
  	printf("Element is found at position : %d", result+1);
  }		
}


int bs(int a[], int n, int l, int h)
{
 int m;
 while(l<=h)
 {
   m=(l+h)/2;
   if(a[m]==n)
   {
	return m; 
   }
   else if(a[m]<n)
   {
	l=m+1;
   }
   else
   {
	h=m-1;
   }
 }
 return -1;
}

