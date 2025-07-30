//Default Arguments

#include<iostream>
#include<cmath>
using namespace std;

int power(int base ,int exp =2)
{
    return pow(base,exp);
}
int main()
{
    cout << power(7) << endl;
    cout << power(2,6) << endl;

    return 0;

}