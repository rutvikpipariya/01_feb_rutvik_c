#include <stdio.h>

int main() {
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i = 1; n>0; i++){
        a = a * 10;
        a = a + n % 10;
        n = n / 10;
    }
    printf("%d",a);
    return 0;
}
