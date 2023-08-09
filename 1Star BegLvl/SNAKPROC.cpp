#include <iostream>
using namespace std;

void checkValidity() {
    int l;
    cin >> l;
    string s, s1;
    cin >> s;
    
    for (int i=0; i<l; i++) {
        if (s[i]!='.')
            s1+=s[i];
    }
    
    bool ans = true;
    int s1n = s1.length();
    if (s1n%2!=0) {
        ans=false;
    }
    else {
        for (int i=0; i<s1n; i++) {
            if (i%2==0) {
                if (s1[i]=='T')
                    ans=false;
            }
            else {
                if (s1[i]=='H')
                    ans=false;
            }
        }
    }
    
    if (ans)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
}

int main() {
	// your code goes here
	int r;
	cin >> r;
	while (r--) {
	    checkValidity();
	}
	return 0;
}
