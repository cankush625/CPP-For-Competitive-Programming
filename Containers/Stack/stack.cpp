#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Declare a stack
    stack<int> st;

    // Push an element to the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    // Get the element at the top of the stack
    cout << st.top() << endl;
    // o/p: 4

    // Pop an element from the stack
    st.pop();
    cout << st.top() << endl;
    // o/p: 3

    // Get the size of the stack
    cout << st.size() << endl;
    // o/p: 3

    // Check if stack is empty
    cout << st.empty() << endl;
    // o/p: 0

    // Swap two stacks
    stack<int> st1;
    stack<int> st2;
    st1.push(2);
    st1.push(3);
    st2.push(7);
    st2.push(8);
    cout << st1.top() << " " << st2.top() << endl;
    // o/p: 3 8

    st1.swap(st2);
    cout << st1.top() << " " << st2.top() << endl;
    // o/p: 8 3

    return 0;
}
