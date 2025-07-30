//Pointer To Pointer

#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << &a << endl;
    cout << "Value pointed by ptr is: " << *ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;
    cout << "Value pinted by pptr is: " << **pptr << endl;

    return 0;
    
}