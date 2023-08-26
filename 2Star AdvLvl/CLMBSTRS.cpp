#include <iostream>
using namespace std;
#define MAXN 1000000
#define MODN 1000000007

long long table[MAXN + 1];
long long count_ones(long long x) {
    long long count = 0;
    while (x) {
        count = count + (x & 1);
        x >>= 1;
    }
    return count;
}
void monkRitual() {
    int N, G;
    cin >> N >> G;
    cout << (count_ones(table[N]) == G ? "CORRECT" : "INCORRECT")<<'\n';
}
int main() {
    table[0] = 0;
    table[1] = 1;
    table[2] = 2;
    for (int i=3; i<=MAXN; i++) {
        table[i] = (table[i-1]%MODN + table[i-2]%MODN)%MODN;
    }
	int tt;
	cin >> tt;
	while (tt--) {
	    monkRitual();
	}
	return 0;
}
