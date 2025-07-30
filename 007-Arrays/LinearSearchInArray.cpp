//Linear Search in Array

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int key = 20;
    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element is found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}