#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string s;
	    cin >> n >> s;
	    int c = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	            c=0;
	        else
	            c++;
	            if(c==4)
	                break;
	    }
	    if(c>=4)
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
	return 0;
}
