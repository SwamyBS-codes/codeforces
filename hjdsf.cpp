#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Half the height of the pattern (height of the upper part)

    // Top part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 5; j++) {
            cout << "#";
        }
        cout << endl;
    }

    // Middle part of the pattern
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n - 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < 15; j++) {
            cout << "#";
        }
        cout << endl;
    }

    // Bottom part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) + 5; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
