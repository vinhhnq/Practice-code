#include <bits/stdc++.h> 
using namespace std;


int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

const int maxn = 1000;
int a[maxn];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i = 0; i < n; i++) cin >> a[i];
		int res; cin>>res;
		for(int i = 0; i<n;i++){
			for (int j = i+1; j < n; j++)
			{ 
				res = max(res,gcd(a[i],a[j]));
			}
		}
		cout<<res <<endl;
	}
	return 0;
}