#include <iostream>
#include <vector>
using namespace std;

void solve() {
	int n; cin>>n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){	
		cin>>a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
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
