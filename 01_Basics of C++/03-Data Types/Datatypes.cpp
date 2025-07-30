//Datatypes

#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    float f  = 9.7;
    char c = 'S';
    string s = "Sanika";
    bool b = 1;

    cout << "Value of a is: " << a <<endl;
    cout << "Value of f is: " << f <<endl;
    cout << "Value of c is: " << c <<endl;
    cout << "Value of s is: " << s <<endl;
    cout << "Value of b is: " << b <<endl;

    cout << "Size of int: " << sizeof(a) <<endl;
    cout << "Size of float: " << sizeof(f) <<endl;
    cout << "Size of char: " << sizeof(c) <<endl;
    cout << "Size of string: " << sizeof(s) <<endl;
    cout << "Size of boolean: " << sizeof(b) <<endl;
    
    return 0;

}