#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for(int i=1; i<=n; i++) {
        ans*=i;
    }
    return ans;
}

int nCr(int n, int r) {
    return (factorial(n))/(factorial(r)*factorial(n-r));
}

void maxSum() {
    int score[11];
    for(int i=0;i<11;i++)
        cin>>score[i];
    sort(score,score+11);

    int k;
    cin >> k;
    int extrarepeat = 0;
    int i = (11-k);
    while (score[i]==score[i-1] && i>=1) {
        extrarepeat++;
        i--;
    }
        
    int included = 1;
    i = (11-k);
    while(score[i] == score[i+1] && i<=9) {
        included++;
        i++;
    }

    if (extrarepeat == 0)
        cout << 1 << endl;
    else
        cout << nCr(included+extrarepeat, included) << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    maxSum();
	}
	return 0;
}
