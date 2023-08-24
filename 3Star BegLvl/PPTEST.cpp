#include <iostream>
using namespace std;

int dp[111][111];
int solve(int i, int w, int weight[], int value[]) {
	if (w==0 || i<0) {
		return 0;
	}
	if(dp[i][w] != -1) {
		return dp[i][w];
	}
	int ans = solve(i-1, w, weight, value);
	if (weight[i] <= w) {
		ans = max(ans, solve(i-1,w-weight[i], weight, value)+value[i]);
	}
	return dp[i][w] = ans;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, w;
		cin >> n >> w;
		int weight[n], value[n];
		for (int i=0; i<n; ++i) {
			int c, p, t;
			cin >> c >> p >> t;
			weight[i] = t;
			value[i] = c*p;
		}
		for (int i=0; i<n+5; ++i) {
			for (int j=0; j<w+5; ++j) {
				dp[i][j] = -1;
			}
		}
		cout << solve(n-1, w, weight, value) << endl;
	}
	return 0;
}
