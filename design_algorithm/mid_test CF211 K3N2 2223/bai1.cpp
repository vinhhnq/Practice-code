#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string S; cin>>S;
	string T; cin>>T;

	sort(S.begin(), S.end());
	sort(T.begin(), T.end());

	int del = 0;
	int i = 0;
	int j = 0;
    while (i < S.length() && j < T.length()) {
        if (S[i] == T[j]) {
            i++;
            j++;
        } else if (S[i] < T[j]) {
            del++;
            i++;
        } else {
            del++;
            j++;
        }
    }
    
    del += S.length() - i + T.length() - j;
    cout<<del<<endl;
	return 0;
}