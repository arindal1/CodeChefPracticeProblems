#include <iostream>
using namespace std;

void whoisWinner() {
    int x, y;
    cin >> x >> y;
    
    long long dif = abs(x-y);
    if (dif >= 2) {
        if(x>y)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    else {
        if(x == y) {
            if (x%2)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
        }
        else {
            long long mn = min(x,y);
            if (mn%2)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    whoisWinner();
	}
	return 0;
}
