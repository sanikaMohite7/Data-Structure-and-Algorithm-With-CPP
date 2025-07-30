//Count and sum of digits in a number

#include<iostream>

using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /=10;
    }
    return count;
}

int sumofDigit(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n %10;
        n /=10;
    }
    return sum;

}
int main()
{

    int n = 97;

    cout << "Count of digits in a number: " << countDigit(n)<< endl;
    cout << "Sum of digits in a number: " << sumofDigit(n) << endl;
}