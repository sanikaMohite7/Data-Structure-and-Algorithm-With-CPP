//Access Elements

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {9,7,6,4};

    cout << v[1] << endl;
    cout << v.at(2) << endl;

    return 0;
    
}