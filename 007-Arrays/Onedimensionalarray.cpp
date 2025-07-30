//One Dimensional Array

#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int arr[4];

    cout << "Enter 4 elements: " << endl;
    for(int i = 0 ; i <= 4 ; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered Values: ";

    for(int i = 0; i <= 4 ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
    
}