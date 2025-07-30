//Linear Search

#include<iostream>

using namespace std;

bool linearSearch(int mat[][3] ,int rows ,int cols ,int key)
{
    for(int i = 0; i < rows ;i++)
    {
        for(int j = 0 ; j < cols; j++)
        {
            if(mat[i][j]==key)
            {
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int mat[2][3] = {{1,2,3} ,{4,5,6}};
    int key = 4;

    int rows = 2;
    int cols = 3;

    cout << linearSearch(mat ,rows ,cols ,key) << endl;

    return 0;

}