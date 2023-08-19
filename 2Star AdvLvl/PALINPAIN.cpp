#include <iostream>
using namespace std;

void palindromes() {
    int a, b;
    cin >> a >> b;
    
	if (a%2==1 and b%2==1||b==1||a==1)
	    cout << -1 << endl;
	else if (a%2==0 and b%2==0) {
	    string s1(a/2,'a');
	    string s2(b,'b');
	    string s3(a,'a');
	    string s4(b/2,'b');
	    
	    cout << s1+s2+s1 << endl;
	    cout << s4+s3+s4 << endl;
	}
	else if (a%2==0) {
	    string s5(a/2,'a');
	    string s6(b,'b');
	    string s7(b/2,'b');
	    
	    cout << s5+s6+s5 << endl;
	    cout << s7+s5+'b'+s5+s7 << endl;
	}
	else if (b%2==0) {
	    string s8(b/2,'b');
	    string s9(a,'a');
	    string s10(a/2,'a');
	    
	    cout << s8+s9+s8 << endl;
	    cout << s10+s8+'a'+s8+s10 << endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    palindromes();
	}
	return 0;
}
