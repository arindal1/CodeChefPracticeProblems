#include <iostream>
#include <vector>
using namespace std;

const long long mod = 1000000007;

int main() {
    vector<long long> l(1, 0);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        for (int j = l.size(); j <= n; ++j) {
            l.push_back(((l[j - 1] * (j + 1)) + j) % mod);
        }

        cout << l[n] << endl;
    }

    return 0;
}
