//string copy
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],str1[20];
    printf("enter first name:");
    scanf("%s",&str);
    strcpy(str1,str);
    printf("\n your full name is :%s",str1);
}
