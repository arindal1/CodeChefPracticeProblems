#include <bits/stdc++.h>
using namespace std;

void tennisTourny() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "NO" << endl;
    else {
        vector<vector<char>> ans(n, vector<char>(n, '0'));

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n / 2; j++) {
                ans[i][(i + j) % n] = '1';
            }
        }

        cout << "YES" << endl;
        for (const vector<char>& line : ans) {
            for (char ch : line) {
                cout << ch;
            }
            cout << endl;
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    tennisTourny();
	}
	return 0;
}
