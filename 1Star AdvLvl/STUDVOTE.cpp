#include <iostream>
using namespace std;

void vote() {
    int n,k;
    cin >> n >> k;
    int arr[n]={0};
    int c=0;
    for(int i=1; i<=n; i++) {
        int a;
        cin >> a;
        arr[a]++;
        if(arr[a]==k && a!=i)
            c++;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    vote();
	}
	return 0;
}
