#include <iostream>
#include <queue>
using namespace std;

class SimpleStack {
    queue<int> q1, q2;

public:
    void push(int x) {
        // Push to q2
        q2.push(x);

        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Swap names of q1 and q2
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
        } else {
            q1.pop();
        }
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.front();
    }

    bool isEmpty() {
        return q1.empty();
    }
};

int main() {
    SimpleStack s;
    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top element: " << s.top() << endl; // 15
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // 10

    return 0;
}
