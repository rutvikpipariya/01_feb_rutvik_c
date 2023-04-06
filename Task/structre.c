#include<stdio.h>
struct stdata
{
    int id;
    char nam[20];
}
st;
int main()
{
    printf("enter your id : ");
    scanf("%d",&st.id);
    printf("enter your name : ");
    scanf("%s",&st.nam);
    printf("\n%s your id is:%d",st.nam,st.id);
}
