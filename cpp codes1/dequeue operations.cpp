#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;  // create a deque

    // insert elements
    dq.push_back(10);   // add at back
    dq.push_back(20);
    dq.push_front(5);   // add at front

    cout << "Deque elements: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    // delete elements
    dq.pop_front();   // remove from front
    dq.pop_back();    // remove from back

    cout << "After deleting front and back: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    // show front and back elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}

