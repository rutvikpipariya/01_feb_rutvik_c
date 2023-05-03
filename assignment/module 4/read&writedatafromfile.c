#include<stdio.h>
int main()
{
    FILE *fptr;
    char filedata[20];
    char nm[20];
    printf("Enter Your Name :");
    scanf("%s",&nm);
    fptr = fopen("D:/internal storage/new.txt", "a");
    fprintf(fptr,"%s",nm);
    fclose(fptr);   
    return 0;
}
