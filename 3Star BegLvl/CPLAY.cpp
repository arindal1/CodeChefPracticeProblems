#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	string s;
	while (cin >> s) {
        int a[10] = {0};
        int b[10] = {0};
        int c=0, sa=0, sb=0, d=0;
	    
        for (int i=0; i<9; i=i+2) {
            a[c] = s[i]-48;
            s = sa+a[c];
            c++;
            if (sa != sb) {
                if (sa > sb) {
                    if (sa-sb > 6-c) {
                        cout << "TEAM-A " << (2*c-1) << endl;
                        break;
                    }
                }
                else {
                    if (sb-sa > 5-c) {
                        cout << "TEAM-B " << (2*c-1) << endl;
                        break;
                    }
                }
            }
            b[d] = [i+1]-48;
            sb = sb+b[d];
            d++;
            if (sa!=sb) {
                if (sa>sb) {
                    if (sa-sb>5-c) {
                        cout << "TEAM-A " << (2*c) << endl;
                        break;
                    }
                }
                else {
                    if (sb-sa>5-c) {
                        cout << "TEAM-B " << (2*c) << endl;
                        break;
                    }
                }
            }
        }
        if(sa==sb) {
            int k=10;
            for(int j=5; j<10; j++) {
                a[j] = s[k]-48;
                sa = a+a[j];
                k++;
                b[j] = s[k]-48;
                sb = sb+b[j];
                k++;
                if (sa!=sb) {
                    if (sa>sb){
                        cout << "TEAM-A " << k << endl;
                        break;
                    }
                    else {
                        cout << "TEAM-B " << k << endl;
                        break;
                    }
                }
            }
            if (sa==sb) {
                cout << "TIE" << endl;
            }
        }
    }
	return 0;
}
