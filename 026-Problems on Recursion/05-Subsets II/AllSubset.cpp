// Get all subsets including handling duplicates

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getAllSubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubset) {
    allsubset.push_back(ans); // Always push the current subset

    for (int j = i; j < nums.size(); j++) {
        // Skip duplicates
        if (j > i && nums[j] == nums[j - 1]) continue;

        ans.push_back(nums[j]);
        getAllSubset(nums, ans, j + 1, allsubset);
        ans.pop_back(); // Backtrack
    }
}

vector<vector<int>> subsetwithdup(vector<int> nums) {
    sort(nums.begin(), nums.end()); // Sort to handle duplicates
    vector<vector<int>> allsubset;
    vector<int> ans;

    getAllSubset(nums, ans, 0, allsubset);
    return allsubset;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = subsetwithdup(nums);

    for (const auto& subset : subsets) {
        cout << "[ ";
        for (int val : subset) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}
