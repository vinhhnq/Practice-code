#include <iostream>
using namespace std;

void solve(){
    int x; cin>>x;
    if(x <= 10){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
