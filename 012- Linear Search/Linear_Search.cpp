//Linear Search

#include<iostream>
using namespace std;

int linearSearch(int arr[] ,int n ,int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr[] = {9,6,7,5,43,2,70,30,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 70;

    int result = linearSearch(arr ,n ,target);

    if(result != -1)
    {
        cout << "Element is found at index:" << result << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    return 0;

}