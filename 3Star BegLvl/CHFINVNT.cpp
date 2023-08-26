#include <iostream>
using namespace std;

void newInvitation() {
    long long n, p, k;
    cin >> n >> p >> k;
    long long d = p%k;
    long long res = 0;
    
    res += (n/k)*d;
    res += p/k+1;
    res += min(d,n%k);
    cout << res << endl;
}

int main() {
	// your code goes here
	long long t;
	cin >> t;
	while (t--) {
	    newInvitation();
	}
	return 0;
}
