#include <bits/stdc++.h>
using namespace std;

void bokenPhone() {
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int &i: a)
        cin >> i;
    
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] != a[i - 1] || a[i] != a[i + 1])
            ans++;
    }
    if (a[n - 1] != a[n - 2])
        ans++;
    if (a[0] != a[1])
        ans++;
    cout << ans << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    bokenPhone();
	}
	return 0;
}
