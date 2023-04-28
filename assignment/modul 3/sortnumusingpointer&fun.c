#include<stdio.h>
void ascending(int n[5])
{
    int *a[5];
    int swap; 
    for(int i = 0; i < 5; i++)
    {
        a[i] = &n[i];
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(*a[i] > *a[j])
            {
                swap = *a[i];
                *a[i] = *a[j];
                *a[j] = swap;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    return;
}
int main()
{
    int a[5],swap;  
    for (int i = 0; i < 5; i++)
    {
        printf("Enter any value at index no. %d : ",i);
        scanf("%d",&a[i]);
    }  
    ascending(a); 
    return 0;
}
