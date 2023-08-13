#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;  // Rainfall amount

        if (x < 200) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
