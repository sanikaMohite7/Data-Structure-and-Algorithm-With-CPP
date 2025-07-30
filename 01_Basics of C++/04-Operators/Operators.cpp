//Operators

#include<iostream>
using namespace std;

int main()
{
    //------Arithmetis Operator-----//
    int a = 9;
    int b = 7;
    cout << "Addition is :" << a + b << endl;
    cout << "Sunstraction is :" << a - b << endl;
    cout << "Multiplication is :" << a * b << endl;
    cout << "Division is :" << a / b << endl;
    cout << "Modulo is :" << a % b << endl;

    //-----Relational Operator-----//

    cout << "a == b:" << (a == b) << endl;
    cout << "a != b :" << (a != b) << endl;
    cout << "a > b :" << (a > b) << endl;
    cout << "a < b :" << (a < b) << endl;
    cout << "a >= b :" << (a >= b) << endl;
    cout << "a <= b :" << (a <= b) << endl;

    //-----Logical Operators-----//
    cout << "a && b :" << (a && b) << endl;
    cout << "a || b :" << (a || b) << endl;
    cout << "!a :" << (!a)<< endl;

    //-----Assignment Operator-----//
    int c = 4;

    c+=2;
    cout << "c += 2" << c << endl;
     c-=2;
    cout << "c -= 2" << c << endl;
     c*=2;
    cout << "c *= 2" << c << endl;
     c/=2;
    cout << "c /= 2" << c << endl;
     c%=2;
    cout << "c %= 2" << c << endl;

    //-----Increment And Decrement Operator-----//
    int i = 6;

    cout << "Pre-increment(++i): " << ++i << endl;
    cout << "Post-increment(i++): " << i++ << endl;
    cout << "Value of i after postincrement: " << i << endl;

    cout << "Pre-decrement(--i): " << --i << endl;
    cout << "Post-decrement(i--): " << i-- << endl;
    cout << "Value of i after postdecrement: " << i << endl;

    return 0;

}