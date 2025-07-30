//Binary Search

#include<iostream>
#include<vector>

using namespace std;
class Solution
{
public:

int binSearch(vector<int> &arr ,int target)
{
    int n = arr.size();
    for(int i = 0; i<=n; i++)
    {
        if(arr[i]== target)
        {
            return i;
        }
    }
    return -1;
}
};

int main()
{
    vector<int> arr = {-1,2,0,5,9,7};
    int target = 9;

    Solution sol;

    cout << sol.binSearch(arr ,target);

    return 0;
    
}