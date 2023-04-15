#include <stdio.h>
#include <math.h>
int main() {
    int n[10];
    for(int i = 0; i<= 9; i++){
        printf("Enter number in index number %d : ",i);
        scanf("%d",&n[i]);
    }
    int max = n[0];
    for(int i = 0; i <= 9; i++){
    max = fmax(max,n[i]);
    }
    printf("\nMaximum number from array is %d",max);
    return 0;
}
