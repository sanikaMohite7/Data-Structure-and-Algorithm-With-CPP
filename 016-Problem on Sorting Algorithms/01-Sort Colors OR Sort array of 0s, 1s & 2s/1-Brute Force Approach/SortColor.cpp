//Sort Color(0,1,2)-Brute Force(O nlogn)

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
  void SortColor(vector<int> &nums)
  {
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else if(nums[i] == 2) count2++;
    }

    int idx = 0;
    for(int i = 0; i < count0; i++)
    {
        nums[idx++] = 0;
    }
    for(int i = 0; i < count1; i++)
    {
        nums[idx++] = 1;
    }
    for(int i = 0; i < count2; i++)
    {
        nums[idx++] = 2;
    }
  }
};
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol;

    sol.SortColor(nums);

    cout << "Sorted Array: ";
    for(int x: nums)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}