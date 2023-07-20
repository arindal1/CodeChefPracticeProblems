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


//////

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        //mp[v[i]]++;
	    }
	    int ans=0;
	    int maxi=0;
	    
	    for(int i=0;i<n;i++){
	        if(mp[v[i]]==0) {
	            mp[v[i]]++;
	            ans++;
	        }
	        else{
	            mp[v[i]]--;
	            ans--;
	        }
	        maxi=max(maxi,ans);
	       // cout<<ans<<" "<<maxi<<endl;
	        
	    }
	    cout<<maxi<<endl;
	}
	//return 0;
}
