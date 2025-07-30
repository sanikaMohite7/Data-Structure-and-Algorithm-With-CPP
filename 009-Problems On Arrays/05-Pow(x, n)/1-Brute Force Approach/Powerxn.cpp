//01-Power(x,n) - (Brute-Force Approach)
#include<iostream>
#include<cmath>
using namespace std;

double myPow(double x , int n)
{
    long long power = abs((long long)n);

    double result = 1.0;

    for(long long i =0; i < power;i++)
    {
        result *= x;
    }

    return n < 0 ? 1.0 / result :result;
}

int main()
{
    double x = 9;
    int n = 2;

    cout << "Power of x raised to n is: " << myPow(x ,n);
}