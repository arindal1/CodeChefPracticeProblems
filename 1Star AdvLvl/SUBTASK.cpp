#include <iostream>
using namespace std;

void score() {
    int n,m,k;
    cin >> n >> m >> k;
	int a[n];
	int count=0, count1=0;
	for( int i=0 ; i<n ; i++ )
	    cin >> a[i];
	for( int i=0 ; i<n ; i++ )
	{
	    if (i<m) {
	        if( a[i]==1 )
	            count++;
	    }
	    else {
	        if( a[i]==1 )
	            count1++;
	    }
	}
	if(count==m)
	{
	    if( (count + count1)==n)
	        cout << "100" << endl;
	    else
	        cout << k << endl;
	}
	else
	    cout << "0" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    score();
	}
	return 0;
}
