#include <iostream>
using namespace std;

void maxGuests() {
    int n, ans=0, maxNum, maxDepart=0;
    cin >> n;
    int *a = new int[n+1]();
    int *b = new int[n+1]();

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    
    for (int i=0; i<n; i++) {
        if (b[i] > maxDepart) {
            maxDepart = b[i];
        }
    }

    for (int i=2; i<maxDepart; i++) {
        maxNum=0;
        for (int j=0; j<n; j++) {
            if ((a[j] <= i) && (b[j] > i)) {
                maxNum++;
            }
        }
        if (ans < maxNum) {
            ans = maxNum;
        }
    }
    cout << ans << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    maxGuests();
	}
	return 0;
}
