//MaxColSum

#include<iostream>
#include<climits>

using namespace std;

int maxColSum(int mat[][3] ,int rows ,int cols)
{
    int maxColSum = INT_MIN;
    for(int j = 0; j < cols ;j++)
    {
        int currentSum = 0;
        for(int i = 0; i < rows ;i++)
        {
            currentSum += mat[i][j];
        }
        maxColSum = max(maxColSum ,currentSum);
    }
    return maxColSum;
}

int main()
{
    int mat[2][3] = {{1,2,3} ,{4,5,6}};
    int rows = 2;
    int cols = 3;

    cout << "Maximum column sum is: " << maxColSum(mat ,rows ,cols) << endl;

    return 0;

}