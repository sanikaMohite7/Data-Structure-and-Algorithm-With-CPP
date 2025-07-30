//Bitwise Operator

#include<iostream>
using namespace std;

int main()
{
    int a = 9 , b = 7;

    cout << "\nBitwise Operators";
    cout << "(a&b) = " << (a & b) << endl;
    cout << "(a|b) = " << (a | b) << endl;
    cout << "(a^b) = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;

}