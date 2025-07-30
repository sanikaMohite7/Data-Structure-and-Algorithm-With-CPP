//Ponters and Function

#include<iostream>
using namespace std;

void swap(int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 9 ,y =7;

    //Before Swapping
    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x ,&y);

    //After Swapping
    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
    
}