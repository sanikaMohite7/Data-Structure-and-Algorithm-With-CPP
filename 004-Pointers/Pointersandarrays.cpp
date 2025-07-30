//Pointers and arrays

#include<iostream>
using namespace std;

int main()
{
    //Pointer to array
    int arr[] = {10,20,30,40};
    int *ptr = arr;

    cout << "First: " << *ptr << endl;
    cout << "Second: " << *(ptr+1) << endl;
    cout << "Third: " << *(ptr+2) << endl;

    //Array of pointers
    int a = 1, b = 2, c =3;
    int *arr1[3] = {&a ,&b ,&c};

    for(int i=0; i<3; i++)
    {
        cout << "Values: " << *arr1[i] << endl;
    }

    //Modifying pointer elemets

    int arr2[4] = {10,20,30,40};
    int *p = arr2;

    for(int i = 0; i < 4; i++)
    {
        *(p + i) *= 2;
    }

    for(int i = 0; i < 4; i++)
    {
        cout << arr2[i] << " " << endl;
    }

    return 0;

}