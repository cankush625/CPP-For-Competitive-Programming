#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    // Push element to queue
    q.push(1);
    q.push(2);
    q.emplace(3);

    // Add 4 to the queue back
    q.back() += 4;
    cout << q.back() << endl;
    // o/p: 7

    // Get front element in the queue
    cout << q.front() << endl;
    // o/p: 1

    // Pop an element fron queue
    q.pop();
    cout << q.front() << endl;
    // o/p: 2

    return 0;
}
