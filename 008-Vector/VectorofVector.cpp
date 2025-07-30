#include<iostream>
#include<vector>
using namespace std;

//2d Vector
int main()
{
    vector<vector<int>> matrix(3 ,vector<int>(4,0));
    matrix[1][2];

    for(int i =0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(auto row: matrix)
    {
        for(auto val: row)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}