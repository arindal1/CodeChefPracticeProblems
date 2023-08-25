#include <bits/stdc++.h>
using namespace std;
#define ll long long

void cokeCan() {
    int n, m, k, l, r;
    cin >> n >> m >> k >> l >> r;
    vector<ll> ans;
    while(n--) {
        int c;
        ll p;
        cin >> c >> p;
        for(int i=1;i<=m;i++) {
            if(c<k-1)
                c++;
            else if(c>k+1)
                c--;
            else if(c>=k-1 and c<=k+1)
                c=k;
        }
        if(c>=l and c<=r)
            ans.push_back(p);
    }
    if (ans.size()!=0) {
    ll mn =* min_element (ans.begin(),ans.end());
    cout << mn << endl;
    }
    else
        cout << -1 << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    cokeCan();
	}
	return 0;
}
