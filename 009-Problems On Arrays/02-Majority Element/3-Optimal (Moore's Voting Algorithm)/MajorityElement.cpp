//Majority Element(Moore's Voting Algorithm)

#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int> nums)
{
    int count = 0;
    int majority = 0;

    for(int num: nums)
    {
        if(count == 0)
        {
            majority = num;
        }

        if(num == majority)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return majority;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2,2,1,1,1};
    cout << "Majority Elements: " << majorityElement(nums) << endl;
    return 0;
}