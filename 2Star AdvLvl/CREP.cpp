#include <bits/stdc++.h>
using namespace std;
#define ll long long


void sumK() {
    ll n, i, j, k;
    cin >> n >> k;
	    unordered_map<ll,ll>m;
	    for(i=0;i<n;i++)
	    {
	        cin >> j;
	        m[j]++;
	    }
	    ll ans=0ll,f=0ll;
	    for(auto x:m)
	    {
	        if(x.second==k)
	        {
	            f=1ll;
	            ans+=(x.first);
	        }
	    }
	    if(f)
	        cout << ans << "\n";
	    else
	        cout << "-1\n";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    sumK();
	}
	return 0;
}
