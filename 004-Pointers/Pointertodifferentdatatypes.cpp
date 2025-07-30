//Pointertodifferentdatatypes

#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    float b = 9.7;
    char c = 'S';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    cout << "Value of a is: " << *p1 << endl;
    cout << "Value of b is: " << *p2 << endl;
    cout << "Value of c is: " << *p3 << endl;

    return 0;

}