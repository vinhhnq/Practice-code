#include <bits/stdc++.h>

using namespace std;
const int max = 2e5 + 10;

int n,p[max],x,i,j,ans;
bool have_gondola[max];


void run(){
	cin >> n >> x;
	for (i = 0;i < n; ++i) {
		cin>>p[i];
	}
	sort(p,p+n);
	i=0;j=n-1;
	while (i<j){
		if(p[i]+p[j]>x){
			--j;
		}
		else{ 
			++ans;
			have_gondola[i]=have_gondola[j]=true;
			++i
			--j; 
		}
	}
	
	for (int i=0;i<n;++i){
		ans+= have_gondola[i] == false;
	}
	cout << ans << "\n";
	
}
int main(){
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	run();
	return 0;
}