#include <stdio.h>
int main()
{
    int l, b, menu;
    float r,area;
    printf("menu\n");
    printf("1. rectangle\n");
    printf("2. circle\n");
    printf("what you want to calculate : ");
    scanf("%d", &menu);
    switch(menu) 
    {
    case 1 :
        printf("enter length:");
        scanf("%d", &l);
        printf("enter breath:");
        scanf("%d", &b);
        area = l*b;
        printf("area of rectangle = %f", area);
        break;
    case 2 :
        printf("enter radius:");
        scanf("%f", &r);
        area = 3.14*r*r;
        printf("area of circle = %f", area);
        break;
    } 
  

    return 0;
}
