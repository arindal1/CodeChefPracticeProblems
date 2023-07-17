#include <bits/stdc++.h>
using namespace std;

void runway() {
    map<int, int> airplainFreq;
    int n,x;
    cin >> n;
    for(int i=0; i < (n*2); i++){
        int val;
        cin >> val;
        airplainFreq[val]++;
    }
    int run=1;
    for(auto i: airplainFreq) {
	    run = (i.second > run)? i.second: run;
	}
	cout <<  run << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    runway();
	}
	return 0;
}
