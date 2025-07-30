//Lexographic Comparison
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<string> words = {"banana" ,"apple" ,"grapes"};
    sort(words.begin() ,words.end());

    for(string w: words)
    {
        cout << w << " ";
    }
    cout << endl;

    cout << "Compare apple < banana: " << ("apple" < "banana") << endl;

    return 0;
    
}