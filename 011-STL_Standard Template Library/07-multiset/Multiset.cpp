//Multiset in STL

#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(9);
    ms.insert(7);
    ms.insert(6);
    ms.insert(4);

    cout << "Multiset Elements:\n";
    for(int x: ms)
    {
        cout << x << " ";
    }

    ms.erase(ms.find(4));
    cout << endl;

    cout << "Multiset Elements:\n";
    for(int x: ms)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "Count of 9: " << ms.count(9) << endl;
    cout << "Size of multiset: " << ms.size() << endl;
    cout << "Is multiset empty: " << (ms.empty() ? "Yes" : "No") << endl;
    cout << "Minimum element: " << *ms.begin() << endl;
    cout << "Maximum element: " << *prev(ms.end()) << endl;

    return 0;

}