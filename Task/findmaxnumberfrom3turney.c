#include <stdio.h>
int main()
{
    int a,b,c ,max;
    printf("enter the first value : ");
    scanf("%d",&a);
    printf("enter the second value : ");
    scanf("%d",&b);
    printf("enter the first value : ");
    scanf("%d",&c);
    (a>b) ? ((a>c) ? (printf("\n a is max : ")) : printf("\n c is max : ")) : ((b>c) ? printf("\n b is max : ") : printf("\n c is max"));
    //printf("max no is %d : ",max);

}
