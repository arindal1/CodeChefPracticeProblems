#include <iostream>
using namespace std;

void maxElement() {
    int n, c=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n-2; i++){
        if(s.at(i) == '0' && s.at(i+1) == '1')
            c++;
    }
    if(s.at(0) == '1')
        c++;
    if(s.at(n-2) == '0')
        c++;
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    maxElement();
	}
	return 0;
}
