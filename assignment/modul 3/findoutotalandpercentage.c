#include<stdio.h>
int main()
{
    float English, Physics, Chemistry, Mathematic, Computer ;
    float total, percentage;
    printf("Enter marks of five subject : ");
    scanf("%f%f%f%f%f",&English, &Physics, &Chemistry, &Mathematic, &Computer );
    total = English + Physics + Mathematic + Chemistry + Computer ;
    printf("total marks = %f\n", total);
    percentage = (total/500.0) *100;
    printf("Percentage = %f", percentage );
    if (percentage >= 80)
    {
        printf("\n You got distinction ");
    }
    else if (percentage >= 60)
    {
        printf("\n You got first class");
    }
    else if (percentage >= 40)
    {
        printf("\n You got second class");
    }
    else 
    {
        printf("\n You got fail");
    } 
} 
