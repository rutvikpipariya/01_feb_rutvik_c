#include <stdio.h>
#include <string.h>
int main() {
    char n[20];
    int length;
    printf("Enter any number : ");
    scanf("%s",&n);    
    length = strlen(n);    
    int x = length - 1;    
    int z = 0;
            for(int i = 0; i < length/2; i++){
                if(n[i] == n[x]){
                    z++;
                }
                x--;
            }    
    if(z == length/2){
        printf("\nNumber is palindrome");
    }   
    else{
        printf("\nNumber is not palindrome");
    }    
    return 0;
}
