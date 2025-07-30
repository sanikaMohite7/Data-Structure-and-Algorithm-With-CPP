//01 - Product of array except itself(Brute-Force Approach)

#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> answer(n);

    for(int i = 0; i < n; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    return answer;
}
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    for(int val: result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
    
}