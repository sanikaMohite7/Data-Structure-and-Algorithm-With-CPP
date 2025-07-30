//Reverse Integer

#include<iostream>

using namespace std;

class Solution
{
public:
  int reverse(int n)
  {
    int rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
  }
};

int main()
{
    Solution sol;
    int n = 123;
    cout << "Reversed integer of " << n << ": " << sol.reverse(n) << endl;

    return 0;
    
}