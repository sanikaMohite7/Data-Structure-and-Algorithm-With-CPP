//TypeCasting

#include<iostream>
using namespace std;

int main()
{
    int a = 9 , b = 7;

    float c = a / b;
    cout << "Value of c is: " << c << endl;

    float c1 = float(a) / b;
    cout << "Value of c1 is: " << c1 << endl;

    //Implicit Conversion(Smaller datatype to bigger datatype)

    int x = 9;
    float y = x;
    cout << "\nImplicit Conversion: " << y << endl;

    //Explicit Conversion(Larger to smaller datatype conversion)

    float pi = 3.14;
    int p = pi;
    cout << "\nExplicit Conversion: " << p << endl;
    
    return 0;
}