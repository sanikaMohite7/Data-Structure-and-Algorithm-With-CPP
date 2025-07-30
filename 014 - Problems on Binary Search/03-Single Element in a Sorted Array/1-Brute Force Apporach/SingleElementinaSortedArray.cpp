//Single Element in a Sorted Array - (Brute Force)

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    int singleElement(vector<int> nums)
    {
        for(int i = 0; i < nums.size()-1; i+=2)
        {
            if(nums[i] != nums[i+1])
            {
            return nums[i];
            }
        }
    
    return nums[nums.size() - 1];
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Unique Element:" << sol.singleElement(nums1) << endl;

    vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};
    cout << "Unique Element:" << sol.singleElement(nums2) << endl;

    return 0;

}
