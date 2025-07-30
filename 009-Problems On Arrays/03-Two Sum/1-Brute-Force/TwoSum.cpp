//Two-Sum(Brute-Force)-Find the two indices whose values sum up to target

#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>nums ,int target)
{
    int n = nums.size();

    for(int i =0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                return{i ,j};
            }
        }
    }

    return {};
}

int main()
{
    vector<int>nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums,target);

    if(!result.empty())
    {
        cout << "Two Sum Indices: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No valid pairs found" << endl;
    }

    return 0;

}