//Vector

#include<iostream>
#include<vector>
#include<algorithm> //for sort ,reverse ,binary_search

using namespace std;

int main()
{
    vector<int> v = {9,7,6};

    v.push_back(4);
    v.pop_back();
    v.insert(v.begin() ,0);
    v[1] = 99;

    cout << "Vector Elements:";
    for(int x: v)
    {
        cout << x << " ";
    }

    sort(v.begin() ,v.end());
    reverse(v.begin() ,v.end());

    int x = 7;
    if(binary_search(v.begin() ,v.end() ,x))
    {
        cout << "\nFound: " << x << "in vector\n";
    }

    auto lb = lower_bound(v.begin(), v.end(), 3);
    auto ub = upper_bound(v.begin(), v.end(), 3);
    cout << "Lower bound of 3: " << (lb - v.begin()) << endl;
    cout << "Upper bound of 3: " << (ub - v.begin()) << endl;

    v.clear();
}

