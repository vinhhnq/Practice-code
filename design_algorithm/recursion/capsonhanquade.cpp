#include <bits/stdc++.h> 
using namespace std;
const long long ll MOD = 1e9;
typedef long long ll;

ll power(ll a, ll b){
	if(b == 0) return 1;
	ll temp = power(a,b/2);
	ll res = (temp*temp) % MOD;

	if(b % 2 == 1) res = (res*a) % MOD;
	return res;

}
ll solve(ll r, ll n){
	if(n = 1) return 1;
	ll x = solve(r, n/2);
	x = (x + (power(r, n/2)*x)% MOD) % MOD;
	if(n % 2 == 1) res = (res + power(r, n-1))%MOD;
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int r, n, a;
	cin>>a>>r>>n;
	cout<<(a*solve(r,n))%MOD<<endl;
	return 0;
}