#include<stdio.h>
int main(){
    int array[10];
    for(int i = 0; i <= 9; i++){
        printf("Enter value in index no. %d : ",i);
        scanf("%d",&array[i]);
    }
    int no;
    printf("\nEnter position of array : ");
    scanf("%d",&no);
    printf("\nat %d position value of that array is : %d",no, array[no]);
}
