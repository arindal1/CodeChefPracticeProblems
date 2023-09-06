#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long totalMixes = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                // Calculate the number of mixes for drinks i and j
                long long mixes = 1LL * A[i] * A[j];

                // Add the number of mixes to the total
                totalMixes += mixes;
            }
        }

        cout << totalMixes << endl;
    }

    return 0;
}
