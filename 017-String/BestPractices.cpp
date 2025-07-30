//Best practices

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string line;
    cout << "Enter Full Line: ";
    getline(cin ,line);
    cout << "You Entered: " << line << endl;

    if(line.empty())
    {
        cout << "Empty String!" << endl;
    }
    else
    {
        cout << "Length: " << line.length() << endl;
    }

    return 0;
    
}