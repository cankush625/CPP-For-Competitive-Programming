#include <iostream>
#include <vector>

using namespace std;

template <typename T> void print_vector(vector<T> v, string sep = " ") {
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
    // Create empty vector
    vector<int> v1;

    // Insert values in vector
    v1.push_back(1);
    // Faster way to insert values in vector is using emplace_back
    v1.emplace_back(2);

    print_vector(v1);
    // o/p: 1 2

    // Inserting pair in vector
    vector<pair<int, int>> v2;

    // Insert pair using push back
    v2.push_back({1, 2});
    // Inserting pair using emplace_back doesn't need curley braces.
    v2.emplace_back(3, 4);

    for (pair p: v2) {
        cout << p.first << " " << p.second << " ";
    }
    cout << endl;
    // o/p: 1 2 3 4

    // Initialize vector with initial values
    // Initialize vector of length 5 with initial value 1
    // Bydefault int container gets initialized with value 0
    vector<int>  v3(5, 1);
    print_vector(v3);
    // o/p: 1 1 1 1 1

    // Create copy of vector.
    // This will create a separate vector v4
    vector<int> v4(v3);
    print_vector(v4);
    // o/p: 1 1 1 1 1

    // Access element at any index
    cout << v1[1] << endl;
    // o/p: 2

    // Iterating over vector using iterator
    // Declare an iterator
    v4[3] = 4;
    v4[1] = 7;
    print_vector(v4);
    // o/p: 1 7 1 4 1
    vector<int>::iterator it = v4.begin();
    it++;
    cout << *it << " " << endl;
    // o/p: 7

    // Pointing to the end of the vector
    vector<int>::iterator it1 = v4.end();
    cout << *it1 << " " << endl;
    // o/p: 0
    it1--;
    cout << *it1 << " " << endl;
    // o/p: 1
    
    // Get the last element of the vector
    v4[4] = 8;
    cout << v4.back() << endl;
    // o/p: 8

    // Delete elements from vector at particular position
    v4.erase(v4.begin()+1);
    print_vector(v4);
    // o/p: 1 1 4 8

    // Delete elements from position x to y
    v4.erase(v4.begin() + 1, v4.begin() + 3);
    print_vector(v4);
    // o/p: 1 8

    // Insert into vector
    v4.insert(v4.begin()+1, 3);
    print_vector(v4);
    // o/p: 1 3 8

    // Insert multiple same elements into vector
    v4.insert(v4.begin()+2, 2, 5);
    print_vector(v4);
    // o/p: 1 3 5 5 8

    // Insert all elements from one vector into another vector
    vector<int> v5 = {2, 6};
    v4.insert(v4.begin(), v5.begin(), v5.end());
    print_vector(v4);
    // o/p: 2 6 1 3 5 5 8

    // Get size of the vector
    cout << v4.size() << endl;
    // o/p: 7

    // Pop out last element from a vector
    v4.pop_back();
    print_vector(v4);
    // o/p: 2 6 1 3 5 5

    // Swap two vectors
    vector<int> v6 = {7, 8};
    v5.swap(v6);
    print_vector(v5);
    // o/p: 7 8
    print_vector(v6);
    // o/p: 2, 6
    
    // Make entire vector empty
    v6.clear();
    print_vector(v6);
    // o/p: 

    // Check if vector is empty or not
    cout << v6.empty() << endl;
    // o/p: 1
}
