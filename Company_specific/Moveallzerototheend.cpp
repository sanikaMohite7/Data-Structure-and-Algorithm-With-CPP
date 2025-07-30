//Move all zeros to the end

#include<iostream>

using namespace std;

int moveallzero(int arr[] ,int n)
{
    int index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index++] = arr[i];
        }
    }

    while(index < n)
    {
        arr[index++] = 0;
    }
}

void printArray(int arr[] ,int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main()
{
    int arr[] = {9,0,7,0,6,2,0,4,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    moveallzero(arr, n);

    cout << "Array after moving zeros to end: ";
    printArray(arr, n);

    return 0;

}