#include <bits/stdc++.h>
using namespace std;

void Plates() {
    float x,y,r;
    cin >> x >> y >> r;
    float extra = r/30;
    float plates = (x+extra)/y;
    
    cout << ceil(plates) << endl;
}


int main() {
    int T;
    cin >> T;

    while (T--) {
        Plates();
    }

    return 0;
}
