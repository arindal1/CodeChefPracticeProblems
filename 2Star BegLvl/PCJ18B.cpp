#include <iostream>
using namespace std;

void oddChess() {
    int n;
    cin >> n;
    int sum=0;

    for (int i=1; i<=n; i+=2) {
        int temp = n-i+1;
        sum+=(temp*temp);
    }
    cout << sum << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    oddChess();
	}
	return 0;
}

