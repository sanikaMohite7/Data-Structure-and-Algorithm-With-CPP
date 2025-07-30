//Null Pointer

#include<iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    if(ptr == nullptr)
    {
        cout << "Pointer is null , it does not contain any value" << endl;
    }

    int a = 9;
    ptr = &a;

    cout << "Pointer is now pointing to the varaible: " << *ptr << endl;

    return 0;

}