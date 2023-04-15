#include<stdio.h>
int no;
void getdata()
{
    printf("Enter The Value of no :");
    scanf("%d",&no);
}
void showdata()
{
    printf("value of no is :%d",no);
}
void main()
{
    getdata();
    showdata();
}
