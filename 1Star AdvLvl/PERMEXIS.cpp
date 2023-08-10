#include <bits/stdc++.h>
using namespace std;

void ansExist(){
    int n,flag=0; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        
        for(int i=0; i<n-1; i++){
            if(abs(arr[i]-arr[i+1])>1){
                flag = 0;
                break;
            }else flag=1;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

int main() {
    int t; cin>>t;
    while(t--){
        ansExist();
    }
	return 0;
}
