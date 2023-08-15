#include <iostream>
using namespace std;

void AliceGo() {
    long n, m;
    cin >> n >> m;
	long all = n * m;
	
	if (n == 1 && m == 1)
        cout << "0/1" << endl;
    else if (n % 2 == 0 || m % 2 == 0)
        cout << "1/2" << endl;
    else {
        long odd = all / 2;
        cout << odd << "/" << all << endl;
	}
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    AliceGo();
	}
	return 0;
}
