// 2D Array - Matrix

#include<iostream>
using namespace std;

int main()
{
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Accessing a specific element
    cout << mat[0][1] << endl;  // Outputs: 2

    int rows = 2;
    int cols = 3;

    // Loop through the matrix and print all elements
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
