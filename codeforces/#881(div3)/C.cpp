#include <iostream>
using namespace std;
typedef long long ll;
void solve() {
  ll n; cin>>n;
  ll rs = 0;
  while(n!=1) {
    if(n % 2 == 0){
      rs += n;
      n = n/2;
    }
    else{
      rs += n;
      n = (n-1)/2;
    }
  } 
  cout<<rs+1<<endl;
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