// problem link
// https://www.codechef.com/problems/MYSERVE


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	


	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;

	    if((x+y+1)%4 == 1 || (x+y+1)%4 == 2){
	        cout << "ALICE\n";
	    }else{
	        cout << "BOB\n";
	    }
	}



}
