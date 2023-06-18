#include <iostream>
using namespace std;

int knap(int W, int wn[], int v[], int n) {
  int dp[n+1][W+1];

  for (int i = 0; i <= n; i++) {
    for (int w = 0; w <= W; w++) {
	    if (i == 0 || w == 0)
	    	return 0;
	    else if (wn[i-1] <= w)
	      dp[i][w] = max(v[i-1] + dp[i-1][w-wn[i-1]], dp[i-1][w]);
	    else
        dp[i][w] = dp[i-1][w];
    }
  }

  return dp[n][W];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int W,n; cin>>W>>n;
	int wn[2000],v[2000];
	for(int i = 0; i < n; i++) cin>>wn[i];
	for(int i = 0; i < n; i++) cin>>v[i];
	int result = knap(W, wn, v, n);
	cout<<result;
	
}