#include <iostream>
using namespace std;

void solve() {
	int a,b,c;
	cin>>a>>b>>c;
	if (a < b && b < c)
	{
		cout<<"STAIR"<<endl;
	}
	else if(a < b && b > c) {
		cout<<"PEAK"<<endl;
	}
	else {
		cout<<"NONE"<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}
