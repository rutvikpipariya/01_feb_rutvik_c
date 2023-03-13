#include <stdio.h>

int main() {
    float maths,gujrati,science,english;
    
    printf("Enter the marks of maths : ");
    scanf("%f",&maths);
    printf("Enter the marks of gujrati : ");
    scanf("%f",&gujrati);
    printf("Enter the marks of science : ");
    scanf("%f",&science);
    printf("Enter the marks of english : ");
    scanf("%f",&english);
    
    float percentage = (maths + gujrati + science + english) / 400 * 100;{
    printf("Your Percentage is %f\n",percentage);
    }
    
    if(percentage>75){
    printf("Pass With Distinction");
    }
    
    else if(percentage>60 && percentage<=75){
    printf("Pass With First Class");
    }
    
    else if(percentage>50 && percentage<=60){
    printf("Pass With Second Class");
    }
    
    else if(percentage>35 && percentage<=50){
    printf("Just Pass Class");
    }
    
    else{
    printf("Fail");
    }
    
    return 0;
}
