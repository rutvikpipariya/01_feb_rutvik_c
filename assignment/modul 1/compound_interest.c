#include<stdio.h>
#include<math.h>
int main(){
    float amt,principal,interest,years;
    printf("Enter Pricipal : ");
    scanf("%f",&principal);
    printf("Enter Interest Rate : ");
    scanf("%f",&interest);
    printf("Enter no. of years : ");
    scanf("%f",&years);
    
    amt = principal * pow((1 + interest / 100 ),years) - principal;
    printf("Your Compound interest is : %f",amt); 
    return 0;
}
