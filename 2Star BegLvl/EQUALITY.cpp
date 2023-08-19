#include <iostream>
using namespace std;

void equalitySolution() {
    int n;
    cin >> n;
    long long a[n];
    long long sum=0;
        
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
        
    for (int i=0; i<n; i++)
        cout << (sum/(n-1)) - a[i] << " ";

    cout << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    equalitySolution();
	}
	return 0;
}
