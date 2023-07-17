#include <iostream>
using namespace std;
void solution()
{
    int maxT, maxN, sumN;
    cin >> maxT >> maxN >> sumN;
    
    long long ans = 0;
    while(maxT && sumN) {
        int N = min(maxN, sumN);
        ans += N*N;
        sumN -= N;
        maxT--;
    }
    cout << ans << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        solution();
	}
	return 0;
}
