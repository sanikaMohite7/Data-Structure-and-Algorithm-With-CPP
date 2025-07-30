//Types of user-defined function

#include<iostream>
using namespace std;

//1.No Argument ,No Return
int showMessage()
{
    cout << "Hello World" << endl;
}

//2.With Argument ,No Return
int greet(string name)
{
    cout << "Hello" << name << endl;
}

//3.No Argument ,With Return
int giveNumber()
{
    return 10;
}

//4.With Arguments ,With Return
int square(int x)
{
    return x * x;
}
int main()
{
    showMessage();
    greet("Sanika");
    cout << giveNumber() << endl;
    cout << square(7) << endl;

    return 0;

}