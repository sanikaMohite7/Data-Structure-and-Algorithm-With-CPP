//Changing value using pointer

#include<iostream>
using namespace std;

int main()
{
    int a = 7;
    int *ptr = &a;

    *ptr = 9;

    cout << "Value of a is: " <<a << endl;
    
    return 0;
    
}