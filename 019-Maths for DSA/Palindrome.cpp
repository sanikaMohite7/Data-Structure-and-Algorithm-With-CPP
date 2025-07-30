//Palindrome number

#include<iostream>
using namespace std;

int reversenumber(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + n %10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n)
{
    return n == reversenumber(n);
}

int main()
{
    int n = 131;

    cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome");
    return 0;
}