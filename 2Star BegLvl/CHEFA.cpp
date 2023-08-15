#include <bits/stdc++.h>
using namespace std;

void maxStones() {
    int n;
    cin >> n;
    long int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    sort(arr,arr+n);
    long long int sum = 0;
    
    for(int i=n-1;i>=0;i=i-2)
        sum += arr[i];
    
    cout << sum << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    maxStones();
	}
	return 0;
}
