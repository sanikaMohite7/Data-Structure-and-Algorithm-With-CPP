//Pointers and dynamic memory(new/delete)

#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;//Dynamicaaly allocated memeory
    *ptr = 9;

    cout << "Dynamically allocated value: " << *ptr << endl;

    delete ptr; //Deallocated memory

    return 0;

}