#include <iostream>
#include <queue>

using namespace std;

int main() {
    // By default priority queue is Max Heap that is
    // the maximum element stays at the top
    priority_queue<int> pq;
    pq.push(1);
    pq.push(8);
    pq.push(5);
    pq.push(3);

    cout << pq.top() << endl;
    // o/p: 8

    pq.pop();
    cout << pq.top() << endl;
    // o/p: 5

    // Implement min heap.
    // Make priority queue have minimum element on top
    priority_queue<int, vector<int>, greater<int>> m_pq;
    m_pq.push(1);
    m_pq.push(8);
    m_pq.push(5);
    m_pq.push(3);

    cout << m_pq.top() << endl;
    // o/p: 1

    return 0;
}
