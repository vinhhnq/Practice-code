// B1: 
// Tính tổng: S(n)= (r^1 + r^2 + r^4 + ... + r^2^(n-1))%(10^9+7)
// Cho biết r và n thỏa mãn 0 <= r,n <= 10^9

#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const long long MOD = 10e9+7;


ll cal_power(ll r, ll n){
	if(n == 0) return 1;
	else if(n % 2  == 0){
		ll temp = cal_power(r, n/2) % MOD;
		return (temp * temp)%MOD;
	}
	else {
		ll temp = cal_power(r, (n-1) / 2)%MOD;
		return ((temp * temp)%MOD * r) % MOD;
	} 
}
ll sum(ll r, ll n){
	if (n == 0)
		return 0;
	ll power = cal_power(r,n-1) % MOD;
	ll s = power + (cal_power(r, n-1)) % MOD;
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll r, n;
  cout << "Nhập giá trị của r: ";
  cin >> r;
  cout << "Nhập giá trị của n: ";
  cin >> n;

  ll result = sum(r, n);
  cout << "Tổng S(n) = " << result << endl;

	return 0;
}


