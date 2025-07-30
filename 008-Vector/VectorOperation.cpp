//Vector Operation

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4};

    v.insert(v.begin() + 2 ,9);
    v.erase(v.begin());
    v.resize(3);

    vector<int> v2 = {7,9,0};
    v.swap(v2);
    v.assign(4,9);

    cout << "Final Vector: ";
    for(int x: v)
    {
        cout << x << " ";
    }

    return 0;

}