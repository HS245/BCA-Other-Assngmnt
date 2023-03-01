// write a program for implimentation of stack using array
#include<stdio.h>
#include<stdlib.h>
#define N 5 
 int stack[5];
 int top=-1;
 void push();
 void pop();
 void peek();
 void display();
 
 void push()
 {
	int item;
	printf("enter the element :");
	scanf("%d",&item);

	if (top==4)
   {
   printf("Overflow");
   }
 else
   {
 	top++;
	stack[top]=item;
   }
}


void pop()
{
     int x;
      if (top==-1)
     {
      printf("Underflow");
     }
else
    {
      x=stack[top];
      top--;
      printf("The popped out data = %d",x);
    } 
}

void peek()
{
  if(top==-1)
    {
    printf("Stack is empty");
    }
  else
    {
      printf("%d\n",stack[top]);
    }
}

void display()
{
   int i;
   printf("\n items are :");
    for(i=top;i>=0;i--)
    {
       printf("%d\t",stack[i]);
    }
}


void main()
{
  int ch;
do
  {
     printf("Enter your choice: \n1:Push \n2:Pop\n3:Peek \n4:Display\n");
     scanf("%d",&ch);

switch (ch)
   {
     case 1: push();
     break;
     case 2: pop();
     break;
     case 3: peek();
     break;
     case 4: display();
     break;
     default:printf("Invalid Choice");
}
 printf("\n");
}while(ch!=0);
}

