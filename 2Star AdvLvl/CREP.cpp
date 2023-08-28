#include <bits/stdc++.h>
using namespace std;

void sumK() {
    int n, k;
    cin >> n >> k;
      
    int arr[n];
    map<int,int> mp;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }
      
    int sum = 0;
    bool flag = false;
    for (auto it:mp) {
        if (it.second==k) {
            sum+=it.first;
            if (it.first==0) {
                flag=true;
            }
        }
    }
    if (sum==0 && flag==false)
        cout << -1 << endl;
    else if (sum==0 && flag==true)
        cout << 0 << endl;
    else
        cout << sum << endl;
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
