//Pointer 

#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    int *ptr = &a;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << &a << endl;
    cout << "Pointer ptr holds: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}