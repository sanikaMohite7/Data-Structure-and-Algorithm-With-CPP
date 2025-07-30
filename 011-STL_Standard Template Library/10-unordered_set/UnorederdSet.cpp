//Unordered set in STL

#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<string> uset;

    uset.insert("Sanika");
    uset.insert("Aditi");
    uset.insert("Prathamesh");
    uset.insert("Ashu");

    cout << "Unordered set elements:\n";
    for(const auto &p: uset)
    {
        cout << p << endl;
    }

    uset.erase("Sanika");

    cout << " After erasing one element Unordered set elements:\n";
    for(const auto &p: uset)
    {
        cout << p << endl;
    }

    return 0;

}