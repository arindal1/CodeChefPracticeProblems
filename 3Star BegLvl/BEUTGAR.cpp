#include <bits/stdc++.h>
using namespace std;
#define ll long long

void garlandBeautiful() {
    string s;
    cin >> s;
    int n = s.size();
    ll cr=0, cp=0, cg=0;
    bool flag = false;
    if (s.size()%2)
        flag=true;
    for (int i=0; i<n; i++) {
        if (s[i]=='R')
            cr++;
        else
            cg++;
        if (i>0) {
            if (s[i-1]==s[i])
                cp++;
        }
	}
    if (s.size()>2 && s[0]==s[s.size()-1])
        cp++;
    if (cr!=cg || cp>2)
        flag = true;
    if (flag)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    garlandBeautiful();
	}
	return 0;
}
