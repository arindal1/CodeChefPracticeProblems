#include <iostream>
using namespace std;
void sc31() {
    int n;
    cin >> n;
    char arr[11];
    string s;
    cin >> s;
    int j=0;
    for (int i=1; i<11; i++) {
        arr[i]=s.at(j++);
    }
    for (int i=0; i<n-1; i++) {
        string s1;
        cin >> s1;
        for (int k=1; k<11; k++) {
            if(s1.at(k-1)=='1' && arr[k]=='1')
                arr[k]='0';
            else if(s1.at(k-1)=='1' && arr[k]=='0')
                arr[k]='1';
            
        }
    }
    int c=0;
    for(int i=1; i<11; i++) {
        if(arr[i]=='1')
            c++;
    }
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    sc31();
	}
	return 0;
}
