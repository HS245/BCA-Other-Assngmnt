//Menu driven program using fn
#include<stdio.h>
float m(int a, int b, int c);
void main()
{
 int a, b, n;
 printf("\n : Enter a choice : \n");
 printf("\n : 1 to Add      : \n");
 printf(" : 2 to Subtract : \n");
 printf(" : 3 to Multiply : \n");
 printf(" : 4 to Divide   : ");
 scanf("%d", &n);
 printf("\n Enter two values : ");
 scanf("%d%d", &a, &b);
 switch(n)
 {
   case 1 : printf("\n The choice is ADDITION \n") ;
            break;
   case 2 : printf("\n The choice is SUBTRACTION \n") ;
            break;
   case 3 : printf("\n The choice is MULTIPLY \n") ;
            break;
   case 4 : printf("\n The choice is DIVISION \n") ;
            break;
   default : printf("\n INVALID CHOICE \n");
 }
 printf("\n Result=%f", m(a, b, n));
}
float m(int a, int b, int c)
{
switch(c)
{
  case 1 : a+b;
           return (a+b);
           break;
  case 2 : a-b;
           return (a-b);
           break;
  case 3 : a*b ;
           return (a*b);
           break;
  case 4 : a/b ;
           return (a/b);
           break;
}
}
