#include <stdio.h>
int main() {
    int *a, *b;
    int x, y, sum;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);    
    a = &x;
    b = &y;
    sum = *a + *b;    
    printf("\nSum of %d and %d is : %d", x, y, sum);    
    return 0;
}
