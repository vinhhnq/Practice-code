#include <bits/stdc++.h> 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a[50],L[1000], i, j, save, s, n;
	cin>>n;
	for(int i = 0; i <= n; i++){
		cin>>a[i];
		s += a[i];
	}
	save = s;
	s = s/2;
	bool check = true;
	while(check){
		for (i = 1; i <= n; i++){
			for (j = s;j >= a[i]; j--) {
				if((L[j] == 0) && (L[j-a[i]]) == 1) L[j] = 1;
				if(L[s] == 1) check = false; else s = s - 1;
			}
		}
	}
	cout<<s<<endl;
	cout<<save - s<<endl;
	
	return 0;
}