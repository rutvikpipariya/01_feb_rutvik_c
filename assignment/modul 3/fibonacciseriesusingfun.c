#include <stdio.h>
int fact(int a)
{
    if(a == 1) return 1;
    return a * fact(a-1);
}
int main() 
{
    int n,factorial;
    printf("Enter any number to find factorial : ");
    scanf("%d",&n);  
    factorial = fact(n);  
    printf("\nFactorial of %d is : %d", n, factorial);
    return 0;
}
