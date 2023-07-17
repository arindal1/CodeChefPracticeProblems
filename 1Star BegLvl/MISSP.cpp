#include <iostream>
using namespace std;

int findMissingDoll(int N) {
    int type, missingType = 0;
    for (int i = 0; i < N; i++) {
        cin >> type;
        missingType ^= type;
    }
    return missingType;
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int missingType = findMissingDoll(N);
        cout << missingType << endl;
    }
    return 0;
}



/* #include <iostream>
using namespace std;

void findDoll()
{
    int n;
    cin >> n;
    int c=0;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x%2!=0)
            c++;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    findDoll();
	}
	return 0;
}
*/
