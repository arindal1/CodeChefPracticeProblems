#include <iostream>
using namespace std;

void TokyoSaved() {
    string a=" ";
    int n=0, t=0, count=0;
    cin >> n >> a;
	
    for (int i=0; i<n-1; i++) {
        if (a[i] == a[i+1])
            count++;
    }
	    
    if (count==0) {
        cout << "NO" << endl;
    }
	else {
        cout << "YES" << endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    TokyoSaved();
	}
	return 0;
}
