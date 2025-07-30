//User-Defined Function

#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int result = add(9,7);
    cout << "Sum = " << result << endl;

    return 0;

}