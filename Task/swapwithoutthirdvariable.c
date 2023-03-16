//Write a program to swap two numbers without using third variable
#include<stdio.h>
    void main()
{
         int a,b;
             printf("\nFirst value :");
             scanf("%d",&a);
      
             printf("\nSecond value :");
             scanf("%d",&b);
      
             printf("\n %d + %d = %d",a,b,a+b);
             printf("\n %d - %d = %d",a,b,a-b);
             printf("\n %d / %d = %d",a,b,a/b);
             printf("\n %d * %d = %d",a,b,a*b);
      
             printf("\n Increment of A++ : %d  ",++a);
             printf("\n Decrement of B-- : %d ",--b);
}
