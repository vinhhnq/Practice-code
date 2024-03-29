#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define in(v) for(int x : v);
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb(n) push_back(n)
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
	int n; cin>>n;
	v32 v(n);
	ll sum = 0;
	for(int &x : v ){
		cin>>x;
		sum += abs(x);
	}
	int rs = 0;
	int cnt = 0;	
	for(int x : v){
		if(x == 0 && cnt == 0) continue;
		if(x <= 0){
			cnt++;
		}
		else {
			if(cnt > 0){
				rs++;
			}
			cnt = 0;
		}
	}
	if(cnt){
		rs++;
	}
	cout<<sum<<" "<<rs<<endl;
}
int main()
{
 fast_cin();
 ll t; cin >> t;
 while(t--) {
   solve();
 }
 return 0;
}