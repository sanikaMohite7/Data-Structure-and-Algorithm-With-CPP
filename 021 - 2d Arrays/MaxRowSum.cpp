//Maximum Sum
#include<iostream>
#include<climits>

using namespace std;

int maxRowSum(int mat[][3] ,int rows ,int cols)
{
    int maxRowSum = INT_MIN;
    for(int i = 0; i < rows; i++)
    {
        int currentSum = 0;
        for(int j = 0; j < cols; j++)
        {
            currentSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum ,currentSum);
    }

    return maxRowSum;
}

int main()
{
    int mat[2][3] = {{1,2,3} ,{4,5,6}};
    int rows = 2 ;
    int cols = 3;

    cout << "maxRowSum is: " << maxRowSum(mat ,rows ,cols) << endl;

    return 0;

}