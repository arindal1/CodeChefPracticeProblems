#include <iostream>
using namespace std;
#define ll long long

void pianoTiles() {
    ll N;
    string s;
    ll sad, rez = 0, i = 0, idx = 0;
    cin >> s >> N;
    while(i < (ll) s.size())
    {
        if(s[i] == 'S') idx++;
        else idx += 2;
        i++;
    }
    sad = idx;
    while(sad <= 12*N) {
        rez += 12*N - sad;
        sad += idx;
    } 
    cout << rez << endl;
}

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while (t--) {
	    pianoTiles();
	}
	return 0;
}
