#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
   vector<vector<int>> fourSum(vector<int> &nums ,int target)
   {
    vector<vector<int>> result;
    int n = nums.size();

    for(int i = 0;i < n - 3; ++i)
    {
        if(i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }

        for(int j = i+1; j<n-2;j++)
        {
            if(j >i+1 && nums[j] == nums[j-1])
            {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while(left < right)
            {
                long long sum = (long long) nums[i]+nums[j]+nums[left]+nums[right];

                if(sum == target)
                {
                    result.push_back(nums[i],nums[j],nums[left],nums[right]);

                    while(left < right && nums[left]== nums[left+1])
                    ++left;

                    while(left < right && nums[right] == nums[right - 1])
                    --right;
                }
                else if(sum < target)
                {
                    ++left;
                }
                else
                {
                    --right;
                }
            }
        }
    }
    return result;
   }
};

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2}; // hardcoded input
    int target = 0;

    Solution obj;
    vector<vector<int>> result = obj.fourSum(nums, target);

    cout << "Quadruplets that sum to target:\n";
    for (const auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
