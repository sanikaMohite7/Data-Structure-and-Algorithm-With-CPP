// Permutations

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans)
{
    if (idx == nums.size())
    {
        ans.push_back(nums); // Correct: push the current permutation
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[idx], nums[i]);          // Choose
        getPerms(nums, idx + 1, ans);      // Explore
        swap(nums[idx], nums[i]);          // Un-choose (Backtrack)
    }
}

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;
    getPerms(nums, 0, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> p = permute(nums);

    for (const auto& p1 : p)
    {
        for (int val : p1)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
