#include <iostream>
using namespace std;

void scholarship()
{
    int r;
    cin >> r;
    if(r<=50 && r>=1)
        cout << "100" << endl;
    else if(r<=100 && r>=51)
        cout << "50" << endl;
    else
        cout << "0" << endl;
}

int main() {
	// your code goes here
	    scholarship();
	return 0;
}
