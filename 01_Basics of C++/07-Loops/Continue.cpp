//Continue Statement

#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 7; i++)
    {
        if(i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}