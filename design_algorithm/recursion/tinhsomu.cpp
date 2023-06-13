#include <bits/stdc++.h> 
using namespace std;
const long long MOD = 1e9;
typedef long long ll;

ll power(ll a, ll b){
	if(b == 0) return 1;
	ll temp = power(a,b/2);
	ll res = (temp*temp) % MOD;

	if(b % 2 == 1) res = (res*a) % MOD;
	return res;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll a,b; cin>>a>>b;
	ll res = power(a,b);
	cout<<res<<endl;
	return 0;
}