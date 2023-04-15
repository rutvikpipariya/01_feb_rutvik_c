#include<stdio.h>
#include<math.h>
int main(){
    int array[3][3];   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("Enter value in raw no. %d and collum no. %d : ",i,j);
        scanf("%d",&array[i][j]);
        }
    }
    printf("\nYour matrix is...\n");
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    int max = array[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        max = fmax(max, array[i][j]);
        }
    }
    printf("\nMaximun number from matrix is : %d",max);
    return 0;
}
