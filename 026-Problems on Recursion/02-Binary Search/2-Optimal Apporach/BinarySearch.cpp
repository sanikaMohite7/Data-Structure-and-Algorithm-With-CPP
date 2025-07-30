//Binary searchusing recursion

#include<iostream>
#include<vector>

using namespace std;
class Solution
{
public:

int binSearch(vector<int> &arr ,int target,int start ,int end)
{
    if(start <= end)
    {
        int mid = start + (end - start) /2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] <= target)
        {
            return(arr ,target ,mid +1 ,end);
        }
        else
        {
            return(arr ,target ,start ,mid - 1);   
        }
    }
    return -1;

}

int search(vector<int> &arr ,int target)
{
    return binSearch(arr ,target ,0 ,arr.size()-1);
}
};

int main()
{
    vector<int> arr = {-1 ,0 ,5 ,7 ,8 ,9};

    int target = 9;

    Solution sol;

    cout << sol.search(arr,target);

    return 0;
    
}