#include <iostream>
using namespace std;

void permutation() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(!(i&1))
            cout << i/2 << " ";
        else
            cout << n-(i/2) << " ";
    }
    cout << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    permutation();
	}
	return 0;
}
