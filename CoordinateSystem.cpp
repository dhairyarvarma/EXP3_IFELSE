#include<iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "1st Quadrant" << endl;
    } else if (x < 0 && y > 0) {
        cout << "2nd Quadrant" << endl;
    } else if (x < 0 && y < 0) {
        cout << "3rd Quadrant" << endl;
    } else if (x > 0 && y < 0) {
        cout << "4th Quadrant" << endl;
    } else {
        cout << "It is Origin" << endl;
    }

    return 0;
}
