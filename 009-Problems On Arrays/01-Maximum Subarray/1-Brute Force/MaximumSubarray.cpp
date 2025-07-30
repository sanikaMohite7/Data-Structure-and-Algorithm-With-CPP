//Maximum Subarray(Brute-Force)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxSubArray(vector<int> nums)
{
    int n = nums.size();
    int max_sum = nums[0];

    for(int i = 0;i < n; i++)
    {
        int current_sum = 0;
        for(int j = i; j < n;j++)
        {
            current_sum += nums[j];
            max_sum = max(max_sum ,current_sum);
        }
    }
    return max_sum;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    
    return 0;
    
}
