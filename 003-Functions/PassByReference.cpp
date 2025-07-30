//Pass By Reference

#include<iostream>
using namespace std;

void fun(int &a)
{
    a = 9;
}
int main()
{
    int b = 7;
    fun(b);
    cout << "Value of b is: " << b << endl;

    return 0;
}