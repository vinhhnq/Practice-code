#include <bits/stdc++.h> 
using namespace std;

void solve(){
	int a,b,c; cin>>a>>b>>c;
	if (c%2==0){		
		if(a > b){
			cout<<"first"<<endl;
		}
		else{
			cout<<"second"<<endl;
		}
	}
	else {
		if(b > a){
			cout<<"second"<<endl;
		}
		else {
			cout<<"first"<<endl;
		}
	}
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
