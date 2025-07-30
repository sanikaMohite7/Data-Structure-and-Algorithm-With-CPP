//Bubble sort

#include<iostream>

using namespace std;

void bubbleSort(int arr[] ,int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int printArray(int arr[] ,int n)
{
    cout << "Sorted Array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) /sizeof(arr[0]);

    bubbleSort(arr ,n);
    printArray(arr ,n);

    return 0;
    
}