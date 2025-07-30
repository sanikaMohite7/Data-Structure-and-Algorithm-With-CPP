//03 - Product of array except itself(Optimal Approach)

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    vector<int>productExceptSelf(vector<int> nums)
    {
        int n = nums.size();
        vector<int> left(n ,1);
        vector<int> right(n ,1);
        vector<int> answer(n);

        for(int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }
        
        for(int i = n-2; i >= 0; i--)
        {
            right[i] = right[i + 1] * nums[i + 1];
        }

        for(int i = 0; i < n; i++)
        {
            answer[i] = left[i] * right[i];
        }

        return answer;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,3,4};
    vector<int>result = sol.productExceptSelf(nums);

    for(int val: result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;

}
