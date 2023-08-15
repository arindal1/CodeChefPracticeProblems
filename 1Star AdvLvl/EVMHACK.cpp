#include <iostream>
using namespace std;

void hackEVM() {
    double a,b,c,p,q,r;
    cin >> a >> b >> c >> p >> q >> r;
    double x = (p+q+r)/2;
    
    if ( p+b+c>x || a+q+c>x || a+b+r>x || a+b+c>x )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    hackEVM();
	}
	return 0;
}
