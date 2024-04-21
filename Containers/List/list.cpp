#include <iostream>
#include <list>

using namespace std;

template <typename T> void print_list(list<T> v, string sep = " ") {
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
    // Declare a list
    list<int> l = {2, 3};
    
    // Push value at back of the list
    l.push_back(4);
    l.emplace_back(5);
    print_list(l);
    // o/p: 2 3 4 5

    // Push value at the front of the list
    l.push_front(1);
    l.emplace_front(0);
    print_list(l);
    // o/p: 0 1 2 3 4 5

    // Note:
    // All other list functions are same as those of vector

    return 0;
}
