//GCD_LCM

#include<iostream>

using namespace std;

int gcd(int a ,int b)
{
    return b == 0 ? a : gcd(b ,a %b);
}

int lcm(int a ,int b)
{
    return (a / gcd(a ,b)) *b;
}

int main()
{
    int a = 9 ,b = 7;

    cout << "GCD: " << gcd(a ,b) << endl;
    cout << "LCM: " << lcm(a ,b) << endl;

    return 0;

}