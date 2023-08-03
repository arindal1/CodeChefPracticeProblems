#include <iostream>
using namespace std;

void transfusion() {
    int n, c=0;
    cin >> n;
    string s[n];
    int O=0, A=0, B=0, AB=0;
    
    for (int i=0; i<n; i++) {
        cin >> s[i];
        
        if (s[i]=="A")
            A++;
        else if (s[i]=="B")
            B++;
        else if (s[i]=="AB")
            AB++;
        else if (s[i]=="O")
            O++;
    }
    c=O;
    if(A>B)
        c+=A+AB;
    else
        c+=B+AB;
    cout << c << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    transfusion();
	}
	return 0;
}
