#include <iostream>
using namespace std;

void foodChain() {
    int e,k,c=0;
    cin >> e >> k;

    while(e)
    {
        c++;
        e=e/k;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    foodChain();
	}
	return 0;
}
