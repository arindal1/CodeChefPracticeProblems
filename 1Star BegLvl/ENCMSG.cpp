#include <iostream>
using namespace std;

void encoder() {
    int n;
    string S;
    cin >> n >> S;
    for(int i=0; i<n-1; i+=2)
    {
        char temp;
        temp = S[i];
        S[i]=S[i+1];
        S[i+1]=temp;
    }
    for(int i=0;i<n;i++)
	{
	    S[i] = S[i] + 2 * (108 - S[i]) + 3;
	}
    cout << S << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    encoder();
	}
	return 0;
}
