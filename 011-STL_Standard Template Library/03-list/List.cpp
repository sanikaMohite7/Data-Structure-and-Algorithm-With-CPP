//List

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l = {1,2,3};
    l.push_front(0);
    l.push_back(4);

    auto it = l.begin();
    advance(it,2);
    l.insert(it,9);

    cout << "List Elements:";
    for(int x: l)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size of list: " << l.size() << endl;
    cout << "Is list empty? " << (l.empty() ? "Yes" : "No") << endl;
    cout << "First Element: " << l.front() << endl;
    cout << "Last Element: " << l.back() << endl; 
}