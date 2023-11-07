/*#write a c++ to input elements in arrays and print all negative elements?*/
#include <iostream>
using namespace std;
int main()
{
    int arr[10]; 
    int i, num;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout<<"Enter size of the array: ";
    cin>>num;
 
    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    cout<<"All negative elements in array are:";
    for(i=0; i<num; i++)
    {
        if(arr[i] < 0)
        {
            cout<<arr[i];
        }
    }
    return 0;
 
}