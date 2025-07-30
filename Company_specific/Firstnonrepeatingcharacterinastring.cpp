// First non-repeating character in a string.

#include<iostream>
#include<unordered_map>

using namespace std;

char firstNonrepetingchar(string s)
{
    unordered_map<char ,int> count;

    for(char c: s)
    {
        count[c]++;
    }

    for(char c: s)
    {
        if(count[c] == 1)
        {
            return c;
        }
    }

    return '\0';

}
int main()
{
    string s = "aabccdd";
    char result = firstNonrepetingchar(s);

    if(result)
    {
        cout << "First non-repeting character: " << result << endl;
    }
    else
    {
        cout << "No non-repeating character found" << endl;
    }

    return 0;

}