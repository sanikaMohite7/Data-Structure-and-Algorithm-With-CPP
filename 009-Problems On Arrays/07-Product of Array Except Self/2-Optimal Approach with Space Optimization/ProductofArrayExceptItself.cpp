//02 - Product of array except itself(Optimal Approach)

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
   vector<int>productExceptSelf(vector<int> nums)
   {
    int n = nums.size();
    vector<int> answer(n ,1);

    for(int i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int right = 1;
    for(int i = n-1; i >= 0; i--)
    {
        answer[i] = answer[i] * right;
        right *= nums[i];
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