#include <bits/stdc++.h>
using namespace std;

void SardarSinghMen() {
    string s;
	cin >> s;
	int l = s.length();
	int arr[l];
	char s1[l];
	for (int i=0; s[i]!='\0'; i++) {
	    arr[i]=s[i];
	}
	sort (arr, arr+l);
	long long temp = 0;
	for (int i=0; i<l; i++) {
	    temp += (i+1)*(arr[i]-96);
	}
	cout << temp << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    SardarSinghMen();
	}
	return 0;
}
