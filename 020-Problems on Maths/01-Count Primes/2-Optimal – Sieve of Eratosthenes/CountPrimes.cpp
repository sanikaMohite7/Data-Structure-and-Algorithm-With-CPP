//Count Primes

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
  int countPrime(int n)
  {
    if(n < 2)
    {
        return 0;
    }

    vector<bool> isPrime(n , true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i < n; i++)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for(int i = 2; i < n; i++)
    {
        if(isPrime[i])
        {
        count++;
        }
    }
    return count;

  }
};
int main()
{
    Solution sol;
    int n = 10;
    cout << "Count of prime no upto " << n << ": " << sol.countPrime(n);
    
    return 0;

}