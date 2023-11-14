#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

void ejemplo_1() {
    unordered_map<int, int> um {
            {10, 1},
            {40, 2},
            {20, 3},
            {15, 4},
            {17, 5},
    };

    map<int, int, greater<>> mp {
            {10, 1},
            {40, 2},
            {20, 3},
            {15, 4},
            {17, 5},
    };

    // Unordered map: O(n) // hash table
    for (const auto& [k, v]: um ) {
        cout << k << ":" << v << endl;
    }
    cout << "--------\n";
    // map: O(nlogn) // binary search tree
    for (const auto& [k, v]: mp ) {
        cout << k << ":" << v << endl;
    }
}

template<typename T>
struct point {
    T x {};
    T y {};
};

void ejemplo_2() {
    unordered_map<point<int>, int> um;
}
int main() {


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
