//Sorting a vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {9,7,6,5,2,4,10,3};

    sort(v.begin() ,v.end());
    cout << "Ascending: ";
    for(int val: v)
    {
        cout << val << " ";
    }

    cout << endl;
    sort(v.rbegin() ,v.rend());
    cout << "Descending: ";
    for(int val: v)
    {
        cout << val << " ";
    }

    return 0;
}