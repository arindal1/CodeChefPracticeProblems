#include <bits/stdc++.h>
using namespace std;

void binaryString() {
    int a,b;
    cin >> a >> b;
    
    if ((a%2 != 0 && b%2 != 0) || a == 1 || b == 1)
        cout<<"No\n";
    else 
        cout<<"Yes\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        binaryString();
    }
    return 0;
}
