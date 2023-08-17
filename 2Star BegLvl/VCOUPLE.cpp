#include <bits/stdc++.h>
using namespace std;

void likenessValue() {
    long long n, sum=0, i, mx=0;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for(long long i=0; i<n; i++)
        cin>>a[i];
        
    for(long long i=0; i<n; i++)
        cin>>b[i];
        
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
        
    for(long long i=0; i<n; i++)
        mx=max(a[i]+b[i], mx);
        
    cout << mx << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    likenessValue();
	}
	return 0;
}
