#include <stdio.h>
#include <string.h>
void cpystr(char strng[],char cpy[]){
    int length = strlen(strng);
    for(int i = 0; i<=length; i++){
        cpy[i] = strng[i];
    }
    return;
}
int main() {
    char name[20];
    char nmcpy[20];
    printf("Enter your name : ");
    scanf("%s",&name);    
    cpystr(name,nmcpy);    
    printf("\n%s",nmcpy);
    return 0;
}
