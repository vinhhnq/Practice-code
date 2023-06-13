#include <bits/stdc++.h> 
using namespace std;

int mySqrt(int x){
	int first = 1, last = x;
	while(first <= last){
		int mid = first + (last+first)/2;
		// mid*mid =x => mid = x/mid
		if (mid == x/mid) 
			return mid;
		else if(mid > x/mid)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return last;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x; cin>>x;
	cout<<mySqrt(x);
	return 0;
}


/*
cho n 1 so n, tìm căn bậc 3 của số n đó.

f(x) = x^3 => x1<x2 =>f(x1) < f(x2) => đồng biến

a^3 = n 
*/