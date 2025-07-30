//Iterative Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int n, int target)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = start +(end - start)/2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {9,7,30,23,15,28,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr ,n ,target);
    if(result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    return 0;

}
