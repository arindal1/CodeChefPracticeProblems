#include <iostream>
using namespace std;

void smallestTrip() {
    int n,k, trips=0;
    cin >> n >> k;
    int wt[n];
    for (int i=0; i<n; i++) {
        cin >> wt[i];
    }
    int t_wt=0;
    for (int i=0; i<n; i++) {
        if (wt[i] > k) {
            cout << "-1" << endl;
            return;
        }
        if (t_wt + wt[i] > k) {
            trips++;
            t_wt = wt[i];
        }
        else {
            t_wt += wt[i];
        }
    }
    cout << (trips+1) << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    smallestTrip();
	}
	return 0;
}
