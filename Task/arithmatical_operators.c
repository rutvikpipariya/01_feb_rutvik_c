#include<stdio.h>
int main ()
{
int a,b;
printf("enter the number a : ");
scanf("%d",&a);
printf("enter the number b : ");
scanf("%d",&b);

printf("addition of a and b is :%d\n",a + b);
printf("subtraction of a and b is :%d\n",a - b);
printf("multiplication of a and b is :%d\n",a * b);
printf("division of a and b is :%d\n",a / b,(float)a/(float)b);
printf("modulo of a and b is :%d\n",a % b);
return 0;
