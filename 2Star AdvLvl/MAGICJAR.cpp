#include <iostream>
using namespace std;

void minimumJars() {
    int n;
	cin >> n;
	long long temp, ans=0;
	
	for(int i=0; i<n; i++) {
		cin >> temp;
		ans += temp-1;
	}
	cout << ans+1 << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    minimumJars();
	}
	return 0;
}
