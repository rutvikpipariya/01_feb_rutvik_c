#include<stdio.h>
int main(){
    int n[5],swap;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter any value at index no. %d : ",i);
        scanf("%d",&n[i]);
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = i+1 ; j < 5; j++){
            if (n[i] > n[j]){
                swap = n[i];
                n[i] = n[j];
                n[j] = swap;
            }
        }
    }
    
    printf("\nValue in ascending sort is :");
    for (int i = 0; i < 5; i++){
        printf("%d ",n[i]);
    }

     for (int i = 0; i < 5; i++){
        for (int j = i+1 ; j < 5; j++){
            if (n[i] < n[j]){
                swap = n[i];
                n[i] = n[j];
                n[j] = swap;
            }
        }
    }
    
    printf("\nValue in descending sort is :");
    for (int i = 0; i < 5; i++){
        printf("%d ",n[i]);
    }
    
    return 0;
}
