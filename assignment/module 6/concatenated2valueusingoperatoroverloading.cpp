#include<iostream>
// string.h string function
#include<string.h>
using namespace std;
// Create a class
class cat
{
    public :
    char fn[10], ln[13];
    // add string function for copying string
    void addstring(char s1[], char s2[])
    {
        strcpy(fn,s1);
        strcpy(ln,s2);
    } 
    void operator+()
        {
            cout<<"Your Full Name is : "<< strcat(fn,ln);
        }
};
int main()
{    
    char s1[10],s2[13];
    cout<<"Enter Your \n\t - First Name : ";
    cin>>s1;
    cout<<"\n - Second Name : ";
    cin>>s2;
    cat obj;
    obj.addstring(s1,s2);
    +obj;
    return 0;
}
