//String Characteristics

#include<iostream>

using namespace std;

int main()
{
    string s = "Nature";
    cout << "Indexed Access: " << s[0] << endl;

    s += " has real beauty";
    cout << "After Append: " << s << endl;

    s[0] = 'n'; //Mutable
    cout << "After modifyting first character: " << s << endl;

    return 0;
    
}