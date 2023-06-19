#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	while(t--) {
		//codeforces
		char c; cin>>c;
		if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's'){
			cout<<"YES"<<"\n";
		}
		else {
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
