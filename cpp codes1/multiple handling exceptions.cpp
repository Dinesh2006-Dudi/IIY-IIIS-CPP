#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter a number (1 for int error, 2 for char error, 3 for double error): ";
        cin >> choice;

        if (choice == 1)
            throw 10;          // throws int
        else if (choice == 2)
            throw 'A';         // throws char
        else if (choice == 3)
            throw 3.14;        // throws double
        else
            cout << "No exception thrown!" << endl;
    }
    // Catch block for int type
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    // Catch block for char type
    catch (char e) {
        cout << "Caught a character exception: " << e << endl;
    }
    // Catch block for double type
    catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    }
    // Default catch block for any other type
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    cout << "Program continues normally after handling exception." << endl;

    return 0;
}

