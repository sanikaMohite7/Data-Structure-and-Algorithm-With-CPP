//Optimal Approach
// Problem Link: https://leetcode.com/problems/3sum/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n - 2; i++) 
    {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        // Use two pointers to find pairs that sum to -nums[i]
        int left = i + 1, right = n - 1;
        while (left < right) 
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) 
            {
                result.push_back({nums[i], nums[left], nums[right]});
                // Skip duplicates for left and right pointers
                while (left < right && nums[left] == nums[left + 1]){
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]){
                    right--;
                }
                left++;
                right--;
            } else if (sum < 0){
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);

    for (auto& v : res) 
    {
        for (int x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
