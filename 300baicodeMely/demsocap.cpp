#include <iostream>
#include <vector>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n,x; cin>>n>>x;
	std::vector<int> a(n);
	for (int i = 0; i < n; ++i){
		std::cin>>a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n ; ++i) {
		for (int j = i; j < n+1; ++j){
			if (a[i] * a[i] + a[j] == x){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}