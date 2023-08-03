#include <iostream>
using namespace std;

void versionControl() {
    int N, M, K;
    cin >> N >> M >> K;

    int hash[N+1]={0};
    for (int i=0; i<M; i++) {
        int a;
        cin >> a;
        hash[a]++;
    }
    for (int i=0; i<K; i++) {
        int b;
        cin >> b;
        hash[b]++;
    }

    int cM=0, cK=0;
    for (int i=1; i<N+1; i++) {
        if(hash[i]==2)
            cM++;
        if(hash[i]==0)
            cK++;
    }
    cout << cM <<" "<< cK <<  endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    versionControl();
	}
	return 0;
}
