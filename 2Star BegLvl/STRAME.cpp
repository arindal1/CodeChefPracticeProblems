#include <bits/stdc++.h>
using namespace std;

void zlatanVramos() {
    int n, c=0;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (auto i : s) {
        if (!st.empty() && st.top() != i) {
            st.pop();
            c++;
        }
        else
            st.push(i);
    }
    if (c%2==0)
        cout << "RAMOS" << endl;
    else
        cout << "ZLATAN" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    zlatanVramos();
	}
	return 0;
}
