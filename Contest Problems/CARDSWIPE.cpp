#include <iostream>

using namespace std;

void maxPpl() {
    int n;
    cin >> n;
    int arr[n+1]={0};
    for(int i=1; i<=n; i++) {
        int a;
        cin >> a;
        arr[a]++;
        if(arr[a]==2) 
            arr[a]=0;
    }
    int c;
    for(int i=1; i<=n; i++) {

        int b = arr[i];
        if(b != 0)
            c++;
        
    }
    cout << c << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        maxPpl();
    }

    return 0;
}
