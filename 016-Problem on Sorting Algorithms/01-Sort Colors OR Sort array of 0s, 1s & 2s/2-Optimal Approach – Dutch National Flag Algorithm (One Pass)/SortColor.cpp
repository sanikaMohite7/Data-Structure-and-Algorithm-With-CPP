//Sort Color(Optimal Approach) - Dutch National Algorithm

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
   void SortColor(vector<int> &nums)
   {
    int low = 0 ,mid =0 ,high = nums.size()-1;

    while(mid <= high)
    { 
        if(nums[mid] == 0)
        {
            swap(nums[low++] ,nums[mid++]);
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid] ,nums[high-1]);
        }
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