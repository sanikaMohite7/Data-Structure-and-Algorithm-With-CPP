//String Compression

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
  int compress(vector<char> &chars)
  {
    int n = chars.size();
    int idx = 0;

    for(int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;

        while(i > n && chars[i] == ch)
        {
            count++;
            i++;
        }
        chars[idx++] = ch;

        if(count > 1)
        {
            string str = to_string(count);
            for(char digit: str)
            {
                chars[idx++] = digit;
            }
        }
        i--;
    }
    chars.resize(idx);

    return idx;

  }
};
int main()
{
    Solution sol;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    
    int len = sol.compress(chars);

    cout << "Compressed: ";
    for (int i = 0; i < len; i++) {
        if (i > 0) cout << ", "; // For better visual formatting
        cout << chars[i];
    }

    cout << "\nLength: " << len << endl;

    return 0;
}