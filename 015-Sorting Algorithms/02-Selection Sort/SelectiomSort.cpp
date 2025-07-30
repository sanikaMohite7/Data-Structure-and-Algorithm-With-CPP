//Selection Sort

#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for(int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        swap(arr[i] ,arr[minindex]);
    }
}

int main()
{
    vector<int> arr = {29, 10, 14, 37, 13};

    selectionSort(arr);
    
    cout << "Sorted Array: " << endl;

    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;

}