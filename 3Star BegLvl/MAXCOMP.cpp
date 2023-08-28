#include <bits/stdc++.h>
using namespace std;

void maxCompensation() {
    int n;
    cin >> n;
    int s, e, c;
    vector<vector<int>> v;
    for (int i=0; i<n; ++i) {
        cin >> s >> e >> c;
        v.push_back({s,e,c});
    }
    
    vector<int> dp(49,0);
    for (int i=1; i<=48; ++i) {
        int max_val=dp[i-1];
        for (int j=0; j<n; ++j) {
            if (v[j][1]==i) {
                max_val = max(max_val,v[j][2]+dp[v[j][0]]);
            }
        }
        dp[i] = max_val;
    }
    cout << dp[48] << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    maxCompensation();
	}
	return 0;
}
