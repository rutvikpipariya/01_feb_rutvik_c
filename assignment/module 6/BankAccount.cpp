#include<iostream>
using namespace std;
class Bank_Account
{
    char Name[30], AC_Type[8],ch;
    long int  AC_Number,Balance = 5000 ,add,min=0;
    public:
        void details()
        {
            cout<<"\t\t -- Welcome To Our Bank-- "<<endl;
            cout<<"\nPlease fill up your Account Details";
            cout<<"\n\nEnter Your Name : ";
            cin>>Name;
            cout<<endl<<"Enter your Account Number : ";
            cin>>AC_Number;
            cout<<endl<<"Which type of Account do you have Saving/Current ? ";
            cin>>AC_Type;
            cout<<endl<<"Your Account Balance is : "<<Balance<<" Rupees.";
            cout<<endl<<"\n                ---------- "<<endl;        
        }
        void input()
        {
            cout<<endl<<Name<<" You Want to Deposit Money Y/N ? ";
            cin>>ch;
            if (ch == 'Y' || ch == 'y')
            {
                cout<<endl<<"Enter Amount That you want to Deposit :";
                cin>>add;
                Balance = Balance + add;
            } 
        }
        void withdraw()
        {
            cout<<endl<<"Your Account Balance is : "<<Balance<<" Rupees."<<endl;
            cout<<endl<<Name<<" Do Yo want to Withdraw Money Y/N ? ";
            cin>>ch; 
            if (ch == 'Y' || ch == 'y')
            {
                cout<<endl<<"How much Amount you want to withdraw ? ";
                cin>>min;         
                    if (Balance < min)
                    {
                        cout<<"Sorry "<<Name<<" you dont have Sufficient Balance in Your Account";   
                    }
                    else
                    {   
                        cout<<endl<<"You Withdraw "<<min<<" from "<<Balance<<endl;
                    }
            }
        } 
        void show()
        {
            cout<<"\n               ---------- "<<endl;
            Balance = Balance - min;
            cout<<endl<<Name<<" You have "<<Balance<<" in Your Account";
            cout<<"\n               ---------- "<<endl;
            cout<<"\t\t -- Thank You For visiting Our Site -- ";
        }     
};
int main()
{
    Bank_Account obj;
    obj.details();
    obj.input();
    obj.withdraw();
    obj.show();
    return 0;
}
