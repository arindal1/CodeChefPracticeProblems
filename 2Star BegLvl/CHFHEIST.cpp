// bella ciao!

#include <bits/stdc++.h>
using namespace std;

void bellaCiao() {
    long day;
    cin >> day;
    long d, p, q;
    cin >> d >> p >> q;
    long seri = day/d;
    long left_sum = 0;
    long rem = day%d;
    long long div_sum = (seri* (2 * p+(seri-1)*q))/2;
    div_sum *= d;
    if (day%d!=0)
    {
        left_sum = rem*(p+seri*q);
    }
    long long sum = div_sum+ left_sum;
    cout << sum << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    bellaCiao();
	}
	return 0;
}
