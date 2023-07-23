#include <iostream>
using namespace std;

void enoughProtein() {
    int n,k;
    cin >> n >> k;
    int arr[n]={0};
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int  rem=0, day=-1;
    for (int i=0; i<n; i++) {
        rem+=arr[i];
        if(rem<k) {
            day=i+1;
            break;
        }
        rem-=k;
    }
    if (day == -1)
        cout << "YES" << endl;
    else
        cout << "NO " << day << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    enoughProtein();
	}
	return 0;
}
