#include <stdio.h>

int main() 
{
    float principal,rate,time,si;
    
    printf("Enter the principal amount : ");
    scanf("%f",&principal);
    
    printf("Enter the rate of interest : ");
    scanf("%f",&rate);
    
    printf("Enter the time in yeras : ");
    scanf("%f",&time);

    si = (principal*rate*time)/100;
    printf("Your simple interest is : %f",si);
    
    return 0;
}
