#include<iostream>
#include<vector>

using namespace std;

bool searchinRow(vector<vector<int>> &mat ,int target ,int row)
{
    int n = mat[0].size();
    int st = 0 ,end = n-1;

    while(st <= end)
    {
        int mid = st + (end -st)/2;
        if(target == mat[row][mid])
        {
            return true;
        }
        else if(target >mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;

}

bool searchMatrix(vector<vector<int>> &mat ,int target)
{
    int m = mat.size() , n = mat[0].size();
    int startRow = 0 ,endRow = m-1;

    while(startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow)/2;

        if(target >= mat[midRow][0] && target <= mat[midRow][n-1])
        {
            return searchinRow(mat ,target,midRow);
        }
        else if(target >= mat[midRow][0])
        {
            startRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;

}
int main()
{
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;

    if (searchMatrix(mat, target)) {
        cout << "Found\n";
    } else {
        cout << "Not Found\n";
    }

    return 0;
}