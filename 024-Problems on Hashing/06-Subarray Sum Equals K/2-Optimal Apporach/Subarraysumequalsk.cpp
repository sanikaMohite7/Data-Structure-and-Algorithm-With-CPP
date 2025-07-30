//Subarray sum eqauls eqauls k

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int subArraySum(vector<int> &nums ,int k)
{
    unordered_map<int ,int> prefixCount;
    prefixCount[0]=1;

    int prefixSum = 0 , count = 0;

    for(int num: nums)
    {
        prefixSum += num;

        if(prefixCount.find(prefixSum-k)!= prefixCount.end())
        {
            count += prefixCount[prefixSum - k];
        }
        prefixCount[prefixSum]++;
    }
    return count;

}
int main()
{
    vector<int> nums = {1 ,2 ,3};
    int k = 3;

    cout << "Count: " << subArraySum(nums ,k) << endl;
    return 0;

}