#include <iostream>
using namespace std;

void RayneFit() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int minimum = arr[0], maximum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < minimum)
            minimum = arr[i];
        else if (arr[i] - minimum > maximum)
            maximum = arr[i] - minimum;
    }
    if (maximum > 0)
        cout << maximum << endl;
    else
        cout << "UNFIT" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    RayneFit();
	}
	return 0;
}
