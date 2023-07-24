#include<bits/stdc++.h>
using namespace std;

void cookOff()
{
	int n,ca=0,si=0,ea=0,me=0,ha=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) {
	 cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(s[i]=="cakewalk")
		    ca++;
		else if(s[i]=="simple")
		    si++;
		else if(s[i]=="easy")
		    ea++;
		else if(s[i]=="easy-medium" or s[i]=="medium")
		    me++;
		else
		    ha++;
	}
	
	if(ca and si and ea and me and ha)
	 cout<<"Yes"<<endl;
	else
	 cout<<"No"<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cookOff();
	}
return 0;
}


//////////////////

#include <iostream>
using namespace std;

void cookOff() {
    int n, arr[5]={0};
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        if(s=="cakewalk")
            arr[0]++;
        if(s=="simple")
            arr[1]++;
        if(s=="easy")
            arr[2]++;
        if(s=="easy-medium" || s=="medium")
            arr[3]++;
        if(s=="medium-hard" || s=="hard")
            arr[4]++;
    }
    if (arr[0] == 1 && arr[1] == 1 && arr[2] == 1)
        if (arr[3] > 0 && arr[4] > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    cookOff();
	}
	return 0;
}
