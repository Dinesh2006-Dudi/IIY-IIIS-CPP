#include <iostream>
using namespace std;

// Template class
template <class T>
class Box {
private:
    T value;

public:
    // Constructor
    Box(T v) {
        value = v;
    }

    // Function to show the value
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(10);        // works with int
    Box<float> floatBox(5.5f);  // works with float
    Box<string> stringBox("Hello"); // works with string

    intBox.show();
    floatBox.show();
    stringBox.show();

    return 0;
}

