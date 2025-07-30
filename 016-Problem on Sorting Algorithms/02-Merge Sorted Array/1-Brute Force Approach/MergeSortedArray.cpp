//Merge Sorted Array

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
   void merge(vector<int> &nums1 ,int m ,vector<int> &nums2 ,int n)
   {
    for(int i = 0; i < n; i++)
    {
        nums1[m+i] = nums2[i];
    }

    sort(nums1.begin() ,nums1.end());
   }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3 , n= 3;

    Solution sol;
    sol.merge(nums1 ,m ,nums2 ,n);

    cout << "Merged Array: ";

    for(int x: nums1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;

}