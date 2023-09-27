#include <bits/stdc++.h> 
using namespace std;

void solve(){
	int n; cin>>n;
	int ans = 0;
	for(int i =0; i < n; i++){
		int a,b; cin>>a>>b;
		if(a-b>0){
			ans++;
		}
	}
	cout<<ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}