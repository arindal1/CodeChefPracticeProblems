#include <iostream>
using namespace std;

void minMoves() {
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    int moves=0, cur=0, des=0;
    if((a+b)%2!=0)
        cur=1;
    if((p+q)%2!=0)
        des=1;
    // 1 is white, 0 is black
    if(a==p && b==q)
        moves=0;
    else{
        if(cur!=des)
            moves++;
        else
            moves=2;
    }
    cout << moves << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    minMoves();
	}
	return 0;
}
