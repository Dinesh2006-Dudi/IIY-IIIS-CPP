#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    // ===== VECTOR =====
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.pop_back();

    cout << "After deleting last element: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;


    // ===== LIST =====
    list<int> l;

    l.push_back(100);
    l.push_back(200);
    l.push_front(50);

    cout << "\nList elements: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    l.pop_front();

    cout << "After deleting first element: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}

