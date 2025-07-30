//Fibonacci Series

#include<iostream>

using namespace std;

void fib(int n)
{
    int a = 0 ,b = 1;

    for(int i = 0; i <= n; i++)
    {
        cout << a << " ";

        int temp = a+b;
        a = b;
        b = temp;

    }

    cout << endl;

}
int main()
{
    int n = 10;
    fib(n);

    return 0;

}