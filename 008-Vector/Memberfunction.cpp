//Member Function

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    v.push_back(6);
    v.pop_back();

    cout << "Front: " << v.front() << "\n";
    cout << "Back: " << v.back() << "\n";
    cout << "At(1): " << v.at(1) << "\n";
    cout << "Size: " << v.size() << "\n";

    cout << "Capacity: " << v.capacity() << "\n";
    cout << "Max Size: " << v.max_size() << "\n";

    v.reserve(9);
    cout << "Capacity after reserve(9): " << v.capacity() << "\n";

    v.resize(6,100);
    cout << "After resize to 6 with 100s: ";
    for(auto x: v)
    {
        cout << x << " ";
    }
    cout << "\n";

    v.clear();
    cout << "Empty: " << v.empty() << "\n";

    return 0;

}