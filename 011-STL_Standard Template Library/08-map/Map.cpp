//Map in STL

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string ,int> age;
    age["Sanika"] = 20;
    age["Prathamesh"] = 22;

    cout << "Map Contents:\n";
    for(auto &p: age)
    {
        cout << p.first << " is " << p.second << " Years Old ";
    }
    cout << endl;
    if(age.count("Prathamesh"))
    {
        cout << "Prathamesh exists in a map";
    }

    age.erase("Sanika");
}