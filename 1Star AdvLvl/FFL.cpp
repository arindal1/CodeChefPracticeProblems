#include <bits/stdc++.h>
using namespace std;

void NFL() {
    int n, s;
    cin >> n >> s;
    int p[n], a[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min0 = INT_MAX, min1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (p[i] < min0)
                min0 = p[i];
        } 
        else if (a[i] == 1) {
            if (p[i] < min1)
                min1 = p[i];
        }
    }

    if (min0 == INT_MAX || min1 == INT_MAX || s + min0 + min1 > 100)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    NFL();
	}
	return 0;
}
