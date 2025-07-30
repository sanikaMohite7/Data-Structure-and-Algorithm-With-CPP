//Recursive Function

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}

int main()
{
    cout << "Factorial of 9 is: " << factorial(9) << endl;

    return 0;
    
}