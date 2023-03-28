#include <stdio.h>
int main()
{
    int number[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ",i,j);
            scanf("%d", &number[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d",number[i][j]);
        }
        printf("\n");
    }
}
