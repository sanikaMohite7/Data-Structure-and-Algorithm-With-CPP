//Forward_List

#include<iostream>
#include<forward_list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    forward_list<int> f = {1,2,3};
    f.push_front(0);
    f.pop_front();

    auto it = f.before_begin(); //Before first element
    f.insert_after(it ,9);

    cout << "Forward List Elements:\n";
    for(int x: f)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "Size of forward list: " << distance(f.begin() ,f.end()) << endl;
    cout << "Is Forward List Empty? " << (f.empty() ? "Yes" : "No") << endl;
    cout << "First Element: " << f.front() << endl;
    cout << "Second Element: " << *prev(f.end()) << endl;
}