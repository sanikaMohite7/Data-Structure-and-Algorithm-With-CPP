//Recursive Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int start,int end ,int target)
{
    if(start > end)
    {
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if(target < arr[mid])
    {
        return binarySearch(arr ,start ,mid - 1 ,target);
    }
    else
    {
        return binarySearch(arr ,mid + 1 ,end ,target);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearch(arr ,0 ,n-1 ,target);

    if(result != -1)
    {
        cout << "Element is found at index: " << result << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    } 

    return 0;

}