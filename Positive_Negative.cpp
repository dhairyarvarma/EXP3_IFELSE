#include<iostream>
using namespace std;

int x, y;

int main() {
    cout << "The variable x is ";
    cin >> x;
    cout << "The variable y is ";
    cin >> y;

    if (x > 0) {
        cout << "x is positive" << endl;
    } else {
        cout << "x is negative" << endl;
    }

    if (y > 0) {
        cout << "y is positive" << endl;
    } else {
        cout << "y is negative" << endl;
    }
}
