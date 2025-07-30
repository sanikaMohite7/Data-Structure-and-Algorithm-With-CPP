#include<iostream>
using namespace std;

int main()
{
    int mat[2][3]; // Removed wrong initializer list

    cout << "Enter elements for 2*3 matrix: " << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Matrix is:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
