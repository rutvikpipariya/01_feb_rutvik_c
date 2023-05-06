#include <iostream>
using namespace std;
int main () 
{
   int *ptr1 = NULL;
   ptr1 = new int; 
   *ptr1 = 10;
   int *ptr2 = new int(20);
   int *ptr3 = new int[50];
   cout << "\nPOINTER 1 : "<<*ptr1;
   cout << "\nPOINTER 2: "<<*ptr2;
   if (!ptr3)
   cout << "Memory failed\n";
   else 
   {
      for (int i = 0; i < 10; i++) 
      ptr3[i] =i+1;
      cout << "\nblock of memory:";
      for (int i = 0; i < 10; i++)
      cout << ptr3[i] << " ";
    }
    delete ptr1;
    delete ptr2; 
    delete[] ptr3;
    return 0;
}
