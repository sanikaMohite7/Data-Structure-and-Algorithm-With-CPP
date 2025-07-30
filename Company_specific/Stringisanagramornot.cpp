//Check string are anagrams or not

#include<iostream>
#include<unordered_map>

using namespace std;

bool isAnagram(string str1 ,string str2)
{
    unordered_map<char ,int> freq1 ,freq2;

    if(str1.size() != str2.size())
    {
        return false;
    }

    for(char c: str1) freq1[c]++;
    for(char c: str2) freq2[c]++;

    return freq1 == freq2;
}
int main()
{
    string str1 = "listen" ,str2 = "silent";

    if(isAnagram(str1 ,str2))
    {
        cout << "Strings are anagrams\n";
    }
    else
    {
        cout << "Strings are not anagrams\n";
    }

    return 0;
    
}