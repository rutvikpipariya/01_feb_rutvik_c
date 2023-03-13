// WAP to get the surface area of cube from given value of edge

#include <stdio.h>
int main() 
{
    float edge;
    float sur_area;
    printf("Enter the edge of cube : ");
    scanf("%f",&edge);
    sur_area = 6 * edge * edge;
    printf("Surface area of the cube is : %f",sur_area);
    return 0;
}
