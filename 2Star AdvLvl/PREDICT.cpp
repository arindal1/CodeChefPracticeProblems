#include <iostream>
using namespace std;

void amoutofMoney() {
    double pa, pb, ans = 10000;
    cin >> pa;
    pb = 1-pa;
        
    ans += 2*pa*pb*10000;
        
    if(pa>pb) 
        ans -= pb*10000;
    else
        ans -= pa*10000;
            
    cout << fixed << ans << endl;
}

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while (t--) {
	    amoutofMoney();
	}
	return 0;
}
