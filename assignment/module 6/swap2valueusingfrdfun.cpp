#include<iostream>
using namespace std;
class Number
{
    public:
    int a,b;
    public :
        // create class 
        friend void add(Number& num);    
};
// define the add function 
void add(Number& num)
    {
        cout<<"Enter First Number : ";
        cin>>num.a;
        cout<<"Enter Second Value : ";
        cin>>num.b;
        cout<<"Addition of "<<num.a<<" and "<<num.b<<" is : "<<num.a + num.b;          
    }
int main()
    {      
        Number obj;
        add (obj);
    }
