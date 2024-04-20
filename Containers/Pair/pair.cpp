#include <iostream>

using namespace std;

int main() {
    // Create pair of numbers
    pair<int, int> num_pair = {1, 2};
    cout << "first number: " << num_pair.first << " second number: " << num_pair.second << endl;
    // o/p: first number: 1 second number: 2
    
    // Create pair with second element as pair
    pair<int, pair<int, int>> nested_pair = {1, {2, 3}};
    cout << "first number: " << nested_pair.first << " nested first: " << nested_pair.second.first << " nested second: " << nested_pair.second.second << endl;
    // o/p: first number: 1 nested first: 2 nested second: 3

    // Updating the second number from num_pair
    num_pair.second = 5;
    cout << "updated second nunber: " << num_pair.second << endl;
    // o/p: updated second nunber: 5

    // Create array of pair
    pair<int, int> arr_of_pair[] = {{1, 2}, {3, 4}};
    cout << "second num of second element: " << arr_of_pair[1].second << endl;
    // o/p: second num of second element: 4
}
