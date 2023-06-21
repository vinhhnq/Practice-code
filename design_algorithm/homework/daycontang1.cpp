#include <bits/stdc++.h> 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	 
	int n; cin>>n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) cin>>a[i];
	std::vector<int> b(n, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if(a[i] > a[j]) {
				b[i] = max(b[i], b[j] + 1);
			} 
		}
	}
	cout<<*max_element(b.begin(), b.end())<<endl;
	return 0;
}