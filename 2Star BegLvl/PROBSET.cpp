#include <iostream>
using namespace std;

void problemTesting() {
    int n,m,count;
	string ns,ms;
	cin >> n >> m;
	bool i=true;
	bool w=true;
	while (n--) {
	    count=0;
	    cin>>ns>>ms;
	    if(ns[0]=='c') {
	        for(int j=0;j<m;j++) {
	            if(ms[j]=='0')
	                i=false;
	        }
	    }
	    else {
	        for(int j=0;j<m;j++) {
	            if(ms[j]=='1')
	                count++;
	        }
	    }
	    if(count==m)
	        w=false;
	}
    if(i==true && w==true)
        cout<<"FINE"<<endl;
    else if(w==false && i==true)
        cout<<"WEAK"<<endl;
    else
        cout<<"INVALID"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    problemTesting();
	}
	return 0;
}
