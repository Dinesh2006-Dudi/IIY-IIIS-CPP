#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;  // create a map

    // Insert elements
    m[1] = "Amit";
    m[2] = "Priya";
    m[3] = "Rahul";

    cout << "Map elements:" << endl;
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
        cout << it->first << " -> " << it->second << endl;

    // Access element
    cout << "\nName with key 2: " << m[2] << endl;

    // Search element
    if (m.find(3) != m.end())
        cout << "Key 3 found: " << m[3] << endl;
    else
        cout << "Key 3 not found" << endl;

    // Delete element
    m.erase(1);

    cout << "\nAfter deleting key 1:" << endl;
    for (it = m.begin(); it != m.end(); ++it)
        cout << it->first << " -> " << it->second << endl;

    return 0;
}

