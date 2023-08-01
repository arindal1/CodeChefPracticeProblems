#include <bits/stdc++.h>
using namespace std;

void completeMeal() {
    int n;
	cin >> n;
	unordered_map<char, int> map;
	for (int i = 0; i < n; ++i) {
	    string s;
	    cin >> s;
	    for (char j: s) {
	        map[j]++;
	    }
	}
    cout << min({map['c'] / 2, map['o'], map['d'], map['e'] / 2, map['h'], map['f']}) << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    completeMeal();
	}
	return 0;
}
