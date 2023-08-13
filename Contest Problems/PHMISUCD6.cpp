#include <iostream>
using namespace std;

int main() {
    string phoneNumber;
    cin >> phoneNumber;

    char repeatedDigit = '-';
    int len = phoneNumber.length();

    for (int i = 1; i < len; i++) {
        if (phoneNumber[i] == phoneNumber[i - 1]) {
            repeatedDigit = phoneNumber[i];
            break;
        }
    }

    if (repeatedDigit != '-') {
        cout << repeatedDigit << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
