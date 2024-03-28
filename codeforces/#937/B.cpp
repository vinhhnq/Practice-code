#include <iostream>
using namespace std;

void solve() {
	int n; cin>>n;
	bool dot = false;
	int cnt = 0;
	int row = 2*n;
	int col = 2*n;
	int curRow = 0;
	int curCol = 0;
	bool rowDot = false;
	while(curRow < row) {
		if (cnt == 2)	
		{
			dot = !dot;
			cnt = 0;
		}
		cnt++;
		if (!dot)
		{
			cout<<"#";
		}
		else {
			cout<<".";
		}
		curCol++;
		if (curCol == col)	
		{
			curCol = 0;
			curRow++;
			cout<<endl;
			cnt = 0;
			if (curCol % 2== 0)
			{
				if (curRow % 2 == 1)
				{
					dot = false;
				}
				else {
					dot = true;
				}
			}
			
		}

	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tc; cin>>tc;
	for (int i = 0; i < tc; ++i)
	{
		solve();
		if (i < tc - 1)
		{
			cout<<endl;
		}
	}
	return 0;
}


