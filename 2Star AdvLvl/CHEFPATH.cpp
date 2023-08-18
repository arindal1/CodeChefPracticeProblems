#include <iostream>
using namespace std;

void magicalPath() {
    long long int a, b;
    cin >> a >> b;
    if (a==1&&b==2||a==2&&b==1)
        cout << "Yes" << endl;
    else if (a==1||b==1)
        cout << "No" << endl;
    else if (a%2!=0&&b%2!=0)
        cout << "No" << endl;
    else 
        cout << "Yes" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    magicalPath();
	}
	return 0;
}
