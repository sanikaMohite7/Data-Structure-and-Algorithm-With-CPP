//Dangling Pointer

#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int; //Dynamically allocated memory

    delete ptr;

    ptr = nullptr;

    cout << "After delete ,ptr is dangling" << endl;
    cout << "*ptr: " << *ptr << "(Undefined Behaivor)" << endl; //Dangerous

    return 0;

}