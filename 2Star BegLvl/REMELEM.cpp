#include <bits/stdc++.h>
using namespace std;

void arrayPossible() {
    int n, k;
    cin >> n >> k;
	int arr[n], i;
	for(i=0; i<n; i++)
	    cin >> arr[i];
	if(n==1)
	    cout << "YES" <<endl;
    else {
    sort (arr, arr + n, greater<int>());
    if (arr[0]+arr[n-1] <= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    arrayPossible();
	}
	return 0;
}
