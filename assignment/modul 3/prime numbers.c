#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if (num == 2 || num == 3 || num == 5 || num == 7){
        printf("Given number is prime number");
    }
    
    else if (num%2==0 || num%3==0 || num%5==0 || num%7==0){
        printf("Given number is not prime number");
    }
    
    else{
        printf("Given number is prime number");
    }
    return 0;
}
