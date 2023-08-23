#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int p, s;
    cin >> p >> s;
    vector<pair<int,int>> ans;
    for (int i=1; i<=p; i++)
    {
        vector<int> score(s);
        for (int j=0; j<s; j++)
            cin>>score[j];
        vector<pair<int,int>> m(s);
         for (int j=0;j<s;j++) {
            int num;
            cin>>num;
            m[j] = make_pair(score[j],num);
        }
        
        int count = 0;
        sort (m.begin(),m.end());
        for (int i=1; i<s; i++) {
            if (m[i-1].second>m[i].second)
                count++;
        }
        ans.push_back (make_pair(count,i));
    }
    sort (ans.begin(),ans.end());
    
    for(int i=0; i<p; i++)
    {
        cout << ans[i].second << endl;
    }
	return 0;
}
