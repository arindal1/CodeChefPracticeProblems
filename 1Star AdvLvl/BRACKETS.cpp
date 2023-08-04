#include <bits/stdc++.h>
using namespace std;

int f(string s)
{
    int balance = 0,max_balance = 0;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]=='(') balance+=1;
        else balance -=1;
        max_balance = max(balance,max_balance);
    }
    return max_balance;
}

int main() {
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    int val = f(s);
	    for(int i=0;i<val;i++) cout<<"(";
	    for(int i = 0;i < val;i++) cout<<")";
	    cout<<endl;
	}
	return 0;
}
