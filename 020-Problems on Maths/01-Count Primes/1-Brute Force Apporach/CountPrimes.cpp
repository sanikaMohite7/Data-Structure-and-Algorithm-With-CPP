//Count Primes

#include<iostream>

using namespace std;
class Solution
{
public:
bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrime(int n)
{
    int count = 0;

    for(int i = 2; i < n; i++)
    {
    if(isPrime(i))
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
    cout << "Count of prime no upto " << n << ": " << sol.countPrime(n) << endl;

    return 0;

}