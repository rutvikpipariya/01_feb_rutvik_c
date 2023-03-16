#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a : ");
    scanf("%d" ,&a);

    printf("Enter the number b : ");
    scanf("%d" ,&b);

    printf("Enter the number c : ");
    scanf("%d" ,&c);

    (a > b && a > c) ? (printf("\nvalue of a = %d is max",a)) : (0);
    (b > a && b > c) ? (printf("\nvalue of b = %d is max",b)) : (0);
    (c > a && c > b) ? (printf("\nvalue of c = %d is max",c)) : (0);
    return 0;
}
