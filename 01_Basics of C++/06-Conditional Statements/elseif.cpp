//Else-If Statement

#include<iostream>
using namespace std;

int main()
{
    int score = 90;

    if(score >= 75 && score <= 100)
    {
        cout << "Distinction" << endl;
    }
    else if(score >= 60 && score <75)
    {
        cout << "First Class";
    }
    else if(score >= 50 && score < 60)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}