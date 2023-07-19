#include <bits/stdc++.h>
using namespace std;
void balloon() {
    int n, c=0;
    cin >> n;
    vector<int> ve;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        ve.emplace_back(a);
    }
    int cq=0;
    for (auto it = ve.begin(); it!=ve.end(); it++) {
        c++;
        if(*(it)>=1 && *(it)<=7)
            cq++;
        if(cq==7)
            break;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    balloon();
	}
	return 0;
}
