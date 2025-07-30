//Reverse Number

#include<iostream>
using namespace std;

int reversenumber(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev *10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n = 97;
    cout << "Reversed Number is: " << reversenumber(n) << endl;
    
    return 0;

}