#include <iostream>
#include <stack>
using namespace std;

// Insert 89 at the bottom of the stack recursively
void insertAtBottom(stack<int> &s) {
    if (s.empty()) {
        s.push(89);  // Insert at bottom
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s);  // Recursive call

    s.push(temp);  // Restore stack
}

// Utility function to print stack from top to bottom
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // Top → 60

    cout << "Before inserting at bottom: ";
    printStack(s);

    insertAtBottom(s);  // Will insert 89 at bottom

    cout << "After inserting 89 at bottom: ";
    printStack(s);

    return 0;
}
