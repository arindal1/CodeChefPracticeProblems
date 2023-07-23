#include <iostream>
using namespace std;

void buyTab() {
    int n, b;
    cin >> n >> b;
    int maxa=0;
    for (int i=0; i<n; i++) {
        int w,h,p;
        cin >> w >> h >> p;
        int area = w*h;
        if(area>maxa && p<=b)
            maxa=area;
    }
    if (maxa==0)
        cout << "no tablet" << endl;
    else
        cout << maxa << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    buyTab();
	}
	return 0;
}
