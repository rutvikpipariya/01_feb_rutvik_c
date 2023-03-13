// WAP to get the area of square from given value of side

#include <stdio.h>
int main() 
{
    float side;
    float square;
    printf("Enter the side of square : ");
    scanf("%f",&side);
    square = side * side;
    printf("Area of the square is : %f",square);
    return 0;
}
