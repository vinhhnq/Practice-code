#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int eat(int n, int k, vector<int> &s) {
    int l = 0;
    int r = n - 1;
    int res = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (s[mid] <= k) {
            res = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	return 0;
}