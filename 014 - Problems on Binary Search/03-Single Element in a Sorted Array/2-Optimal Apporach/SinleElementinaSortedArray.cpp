//Single Element in a Sorted Array(Optimal Approach)

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
   int singleElement(vector<int> nums)
   {
    int low = 0;
    int high = nums.size() - 2;

    while(low <= high)
    {
        int mid = low +(high - low) / 2;

        if(mid % 2 == 1)
        {
            mid--;
        }

        if(nums[mid] == nums[mid + 1])
        {
            low = mid + 2;
        }
        else
        {
            high = mid - 1;
        }
    }

    return nums[low];
   }
};
int main()
{
    Solution sol;

    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Unique Elements: " << sol.singleElement(nums1) << endl;

    vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};
    cout << "Unique Elements: " << sol.singleElement(nums2) << endl;

    return 0;

}