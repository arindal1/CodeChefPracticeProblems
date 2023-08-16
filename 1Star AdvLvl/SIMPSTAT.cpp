#include <bits/stdc++.h>
using namespace std;

void averageValue() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    
    double sum = 0;
    for(int i=k; i<n-k; i++)
        sum += arr[i];

    double avg = sum/(n-2*k);
    cout << fixed << setprecision(6) << avg << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    averageValue();
	}
	return 0;
}
