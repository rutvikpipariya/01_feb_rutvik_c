#include <stdio.h>
long int factorial(long int no)
{
    if (no < 1)
    {
        return 1;
    } 
    return no * factorial (no -1);
}
int main ()
{
    long int n;
    printf("Enter the Value of no :");
    scanf("%ld",&n);
    printf("%ld",factorial(n));
    return 0;
}
