#include <iostream> 
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int k; cin>>k;
	int cnt = 0;
	for (int i = 0; i < n; ++i){
		for (int j = i + 1; j < n; j++){
			if(a[i] + a[j] == k){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}