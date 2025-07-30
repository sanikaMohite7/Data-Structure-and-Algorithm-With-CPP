//02 - Power(x,n) - Optimal Approach
#include<iostream>
using namespace std;

double myPow(double x , int n)
{
    long long  N = n;

    if(N < 0)
    {
        x = 1/x;
        N = -N;
    }

    double result = 1.0;
    while(N > 0)
    {
        if(N % 2 == 1)
        {
            result *= x;
        }

        x *= x;
        N /= 2;
    }

    return result;
}
int main()
{
    double x = 9;
    int n = 2;

    double result = myPow(x,n);
    cout << result << endl;

}
