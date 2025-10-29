#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(10, 20) << endl;
    cout << "Addition of floats: " << add(5.5f, 2.3f) << endl;
    cout << "Addition of doubles: " << add(3.1415, 2.7182) << endl;

    return 0;
}

