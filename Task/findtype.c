#include<stdio.h>
    int main()
{    
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);                
        if((ch >= 97 && ch <= 122)||(ch >= 65 && ch <= 90))
        {
        printf("%c is alphabet \n",ch);
        }
        else
        if(ch >= 48 && ch <= 57)
        {
        printf("%c is number \n",ch);
        }                   
        else
        {
        printf("%c is special character \n",ch);
        }
    return 0;
         
}
