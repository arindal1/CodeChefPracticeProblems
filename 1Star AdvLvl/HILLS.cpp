#include <iostream>
using namespace std;

void reachableHill() {
    int n, u, d;
    cin >> n >> u >> d;
    int chef=1, par=1, arr[n+1]={0};
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n-1; i++) {
        if (arr[chef]==arr[chef+1])
            chef++;
        else if(arr[chef+1]>arr[chef]) {
            if(arr[chef+1]-arr[chef]<=u)
                chef++;
            else
                break;
        }
        else {
            if(arr[chef]-arr[chef+1]<=d)
                chef++;
            else if(par>0) {
                chef++;
                par--;
            }
            else
                break;
        }
        
    }
    cout << chef << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    reachableHill();
	}
	return 0;
}
