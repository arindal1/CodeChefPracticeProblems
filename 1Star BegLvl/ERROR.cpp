#include <iostream>
using namespace std;

void feedback() {
    string s;
    cin >> s;
    int n = s.length();
    int c=0;
    for (int i=0; i<n-2; i++) {
        if((s[i]!=s[i+1])&&(s[i+1]!=s[i+2])) {
            c++;
            break;
        }
    }
    if(c>0)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    feedback();
	}
	return 0;
}
