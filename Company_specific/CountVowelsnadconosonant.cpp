//Count vwels and consonent 

#include<iostream>

using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

}
int main()
{
    string str = "sanika";
    int v = 0 ,c = 0;

    for(char ch: str)
    {
        if(isalpha(ch))
        {
            if(isVowel(ch))
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }

    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;

    return 0;

}