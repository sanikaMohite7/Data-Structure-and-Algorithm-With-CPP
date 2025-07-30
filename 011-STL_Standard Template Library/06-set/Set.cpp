//Set in STL

#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<in> s;
    s.insert(9);
    s.insert(7);
    s.insert(4);
    s.insert(6);
    s.insert(2);

    cout << "Set Elements: ";
    
    for(int x: s)
    {
        cout << x << " ";
    }

    s.erase(4);

    auto it = find(2);
    if(it !=)
}