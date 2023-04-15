#include <stdio.h>
int main() {
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    int a,b = 0;
    for(int i = 1; num%10>=1; i++){
        a = num%10;
        b = b + a;
        num = num/10;
    }
    printf("The sum of given number is %d",b);
    return 0;
}
