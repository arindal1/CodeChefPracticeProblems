#include <bits/stdc++.h>
using namespace std;

void infectedPeople() {
    int n;
	cin >> n;
	vector <int> v(n);
	for (auto &i: v)
	    cin >> i;
	int temp, mini = INT_MAX, maxi = INT_MIN, count = 1;
	for (int i = 0; i < n-1; ++i) {
	    temp = abs(v[i + 1] - v[i]);
	    if (temp <= 2)
	        ++count;
	    else {
	        mini = min(mini, count);
	        maxi = max(maxi, count);
	        count = 1;
	    }
	}
	mini = min(mini, count);
	maxi = max(maxi, count);
	cout << mini << ' ' << maxi << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    infectedPeople();
	}
	return 0;
}

