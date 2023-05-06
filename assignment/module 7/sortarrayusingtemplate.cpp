#include <iostream>
using namespace std;
// Function for sort array 
template <typename T>
void sortArray(T arr[], int n) 
{
    // loop 
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                // used swap method 
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } 
    cout << "Ascending Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        cout << ", ";
    }  
}
int main()
 {
    int arr1[10];
    cout<<"Enter numbers :";
    // loop for 10 separate values 
    for (int i = 0; i < 10 ; i++)
    {
        cin>>arr1[i];    
    } 
    sortArray(arr1,10);
    return 0;
}
