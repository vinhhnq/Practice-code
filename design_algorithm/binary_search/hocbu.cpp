#include <bits/stdc++.h> 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[100];
	int n; cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int x;
	cin>>x;
	int l = 0, r = x;
	int mid = (l+r)/2; //vi tri giua (trung vi)
	while(l != r) {
		if(a[mid] < x)
			l = mid+1;
		else // a[mid] >= x
			r = mid;
		cout<<mid<<" "<<a[mid]<<" "<<"l = "<<l<<" r = "<<r<<endl;
		mid = (l+r)/2;
	}
	if(x == a[mid])
		cout<<"x co ton tai trong mang a tai vi tri thu"<<mid<<endl;
	else
		cout<<"x khong ton tai trong mang a"<<endl;

	return 0;
}