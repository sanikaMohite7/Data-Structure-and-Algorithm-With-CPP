//Multimap in STL

#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap<string ,int> map;

    map.insert({"Sanika" ,1});
    map.insert({"Aditi" ,2});
    map.insert({"Prathamesh" ,3});
    map.insert({"Ashu" ,4});

    cout << "Multimap Elements:\n";
    for(const auto &p: map)
    {
        cout << p.first << " => " << p.second << endl;
    }
    map.erase("Sanika");
    
    cout << endl;

    cout << "After eraisng one element Multimap Elements:\n";
    for(const auto &p: map)
    {
        cout << p.first << " => " << p.second << endl;
    }

    return 0;

}