//Deque

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(9);
    dq.push_front(7);
    dq.push_front(9);
    dq.push_back(4);
    dq.pop_back();
    dq.pop_front();

    cout << "Dequeue Elements:\n";
    for(int x: dq)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;
    cout << "First Element: " << dq.front() << endl;
    cout << "Last Element: " << dq.back() << endl;

    return 0;

}