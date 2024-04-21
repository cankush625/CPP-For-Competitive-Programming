#include <iostream>
#include <deque>

using namespace std;

template <typename T> void print_deque(deque<T> v, string sep = " ") {
    /*
    * Prints the elements of vector v in a single line separated by space.
    * @paran v: Accepts vector of any type T
    * @paran sep: Optiional separator can be provided if required
    */

    for (T num: v) {
        cout << num << sep;
    }
    cout << endl;
}

int main() {
    deque<int> dq = {6, 7};

    // Insert at last
    dq.push_back(8);
    dq.emplace_back(9);
    print_deque(dq);
    // o/p: 6 7 8 9

    // Insert at the front
    dq.push_front(5);
    dq.emplace_front(4);
    print_deque(dq);
    // o/p: 4 5 6 7 8 9

    // Pop element from front
    dq.pop_front();
    print_deque(dq);
    // o/p: 5 6 7 8 9

    // Pop element from back
    dq.pop_back();
    print_deque(dq);
    // o/p: 5 6 7 8

    // Get the last element from the deque
    cout << dq.back() << endl;
    // o/p: 8

    // Get the first element from the deque
    cout << dq.front() << endl;
    // o/p: 5

    // Note:
    // All other deque functions are same as that of vector

    return 0;
}
