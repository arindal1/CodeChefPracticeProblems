#include <bits/stdc++.h>
using namespace std;

void repeater() {
    int n,k,s;
    cin >> n >> k >> s;
    int c=s-(n*n);
    int x=c/(k-1);
    cout << x << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    repeater();
	}
	return 0;
}
