#include <iostream>
#include <string>
using namespace std;
void solve(){
	int n; cin>>n;
	string s; cin>>s;
	int x = 0, y = 0;
	for(auto i : s){
		if(i == 'L') x--;
		if(i == 'R') x++;
		if(i == 'U') y++;
		if(i == 'D') y--;
		if(x == 1 && y == 1){
			cout<<"YES"<<"\n";
			return;
		}

	}
	cout<<"NO"<<"\n";	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--) {
		solve();
	}
	
	return 0;
}