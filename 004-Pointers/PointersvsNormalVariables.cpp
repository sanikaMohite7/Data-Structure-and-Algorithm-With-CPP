//Pointer Vs Normal Variables

#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    int *p = &a;

    cout << "Value of a is: " << a << " , &a = " << &a << endl;

    cout << "Value of ptr is: " << *p << ", ptr = " << p << endl;

    return 0;

}