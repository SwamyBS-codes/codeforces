#include <iostream>
using namespace std;

// Iterative function to find the winner's position
int josephusIterative(int n, int k) {
    int result = 0;  
    for (int i = 2; i <= n; ++i) {
        result = (result + k) % i;
    }
    return result + 1;  
}

int main() {
    int n, k;
    cout << "Enter number of people (n): ";
    cin >> n;
    cout << "Enter the step count (k): ";
    cin >> k;

    int winner = josephusIterative(n, k);
    cout << "The winner is at position: " << winner << endl;

    return 0;
}
