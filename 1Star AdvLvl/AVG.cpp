#include <iostream>
using namespace std;
void sequence() {
    int n,k,v;
    cin >> n >> k >> v;
    int sumA=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        sumA+=a;
    }
    int sum = v*(n+k);
    int x = (sum-sumA)/k;
    if(x>0 && (sum-sumA)%k == 0) {
        cout << x << endl;
    }
    else
        cout << "-1" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    sequence();
	}
	return 0;
}
