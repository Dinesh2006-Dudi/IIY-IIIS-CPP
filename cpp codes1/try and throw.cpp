#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw 0;
        }
        float result = (float)num1 / num2;
        cout << "Result: " << result << endl;
    } catch (int e) {
        cout << "Error: Division by zero!" << endl;
    }

    return 0;
}
