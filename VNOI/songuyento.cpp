#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void solve(){
  long a, b, n;
  cin>>a>>b;

  for(int i = a; i <= b; i++){
    if(i == 1)
      continue;
    n = 0;
    for(int j = 2; j <= sqrt(i); j++ ){
      if(i % j == 0)
      {

        n++;
        break;
      }
    }
    if(n == 0){ 
      cout<<i<<"\n";
    }   
  }


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;

}