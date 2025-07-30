#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    unordered_set<int> s;

    for(int val : arr)
    {
        if(s.find(val) != s.end())
        {
            return val; // 
        }
        s.insert(val);
    }

    return -1; // 
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << "Duplicate is: " << findDuplicate(arr) << endl; 
    return 0;
}
