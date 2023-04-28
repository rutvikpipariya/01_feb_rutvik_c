#include <stdio.h>
#include <string.h>
int main() 
{
    char *ptr[20];
    char str1[20], str2[20];
    printf("Enter something in string-1 : ");
    scanf("%s", &str1);
    printf("Enter something in string-2 : ");
    scanf("%s", &str2);
    int length = strlen(str1);
    for(int i = 0; i < 20; i++)
    {
        ptr[i] = &str2[i];
    }
    str1[length] = ' ';
    for(int i = 0; i < 20; i++)
    {
        length++;
        str1[length] = *ptr[i];  
    }
    printf("\nafter concatenate your string is : %s",str1);
    return 0;
}
