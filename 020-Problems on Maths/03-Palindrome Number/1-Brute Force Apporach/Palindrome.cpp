//Palindrome number

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution
{
public:
  bool isPalindrome(int n)
  {
    if(n < 0)
    {
        return false;
    }

    string s = to_string(n);
    string rev = s;

    reverse(rev.begin() ,rev.end());

    return s == rev; 
  }
};

int main()
{
    Solution sol;
    int n = 121;
    cout << n << " is Palindrome?" << (sol.isPalindrome(n)? " Yes" : "No");

    return 0;

}