#include <iostream>
using namespace std;

void isFour() {
    string s;
    cin >> s;
    int n=s.size();
    int c=0;
    for(int i=0; i<n; i++) {
        if(s[i]==52)
            c++;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    isFour();
	}
	return 0;
}
