//String Compression - Occuranceof character in the given sequence

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        string result = "";
        int i = 0;

        while(i < chars.size())
        {
            int current = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == current)
            {
                count++;
                i++;
            }
            result += current;
            if(count > 1)
            {
                result += to_string(count);
            }
        }
            for(int j = 0; j < result.size();j++)
            {
                chars[j] = result[j];
            }

            return result.size();
    }
};
int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};
    
    Solution sol;
    int len = sol.compress(chars);

    cout << "Compressed: ";
    for(int i = 0; i < len; i++)
    {
        cout << chars[i] << " ";
    }

    cout << "\nLength:" << len << endl;

    return 0;

}