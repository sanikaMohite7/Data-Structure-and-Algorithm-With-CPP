//String Operations

#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    string s1 = "Sanika";
    string s2 = "Mohite";

    //Concatenation

    string s = s1 + " " + s2;
    cout << "Concatenation: " << s << endl;

    //Substring
    cout << "Substring(0,7): " << s.substr(0,7) << endl;

    //Search
    cout << "Found 'Sa': " << (s.find("Sa") != string::npos) << endl;

    //Replace
    s.replace(0,1,"s");
    cout << "After Replace: " << s << endl;

    //Reverse
    reverse(s.begin() ,s.end());
    cout << "Reversed String is: " << s << endl;

    //Sort
    sort(s.begin() ,s.end());
    cout << "Sorted String is: " << s << endl;

    //Frequency
    unordered_map<char ,int> freq;
    for(char c: s) freq[c]++;
    cout << "Frequency of 'a': " << freq['a'] << endl;

    return 0;

}