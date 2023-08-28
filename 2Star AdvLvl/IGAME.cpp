#include <bits/stdc++.h>
using namespace std;
#define eps 1e-9

void AliceBob() {
    int m , n, p , q;
    cin >> m >> n >> p >> q;
    m -= p;
    n -= q;
    if (m<n)
        swap(m,n);
    cout << (n-int((m-n)*(1+sqrt(5.0))/2+eps)?"Alice":"Bob") << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    AliceBob();
	}
	return 0;
}
