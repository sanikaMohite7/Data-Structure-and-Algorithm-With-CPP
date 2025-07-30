//Insertion at specific index in an array

#include<iostream>
using namespace std;
 
int main()
{
    int arr[6] = {1,2,3,4,5};
    int pos = 2;
    int val = 9;

    for(int i = 5; i > pos ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;

    cout << "Array after insertion: ";
    for(int i = 0; i < 6 ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0; 
}