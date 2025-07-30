//Function Declaration & Definition

#include<iostream>
using namespace std;

//Function Declaration
int add(int ,int);

//Function Defination
int add(int a ,int b)
{
    return a + b;
}

int main()
{
   cout << add(9,7);
   return 0;
}