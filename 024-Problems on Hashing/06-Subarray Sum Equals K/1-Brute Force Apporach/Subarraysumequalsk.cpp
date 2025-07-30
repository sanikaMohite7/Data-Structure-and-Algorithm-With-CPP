//Sub-Array Sum Equals K

#include<iostream>
#include<vector>

using namespace std;

int subArraySum(vector<int> &nums ,int k)
{
    int count = 0 , n = nums.size();
    
    for(int i = 0; i < n ;i++)
    {
        int sum = 0;
        for(int j = i ;j <n;j++)
        {
            sum += nums[j];

            if(sum == k)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {1,2,3};
    int k = 3;

    cout << "Count: " << subArraySum(nums ,k) << endl;
    return 0;
    
}