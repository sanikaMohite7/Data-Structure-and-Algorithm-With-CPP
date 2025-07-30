//Declaration and initialization of vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(5);
    vector<int> c(5,9);
    vector<int> d ={1,2,3,4,5};

    //Traversing vector
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;

    for(auto x: b)
    {
        cout << x << " ";
    }
    cout << endl;

    for(auto x: c)
    {
        cout << x << " ";
    }
    cout << endl;

    for(auto x: d)
    {
        cout << x << " ";
    }

}