#include <bits/stdc++.h> 
using namespace std;

#define ARRAYN 100;
int parent[ARRAYN];
int n;


void make_set(){
	for (int i = 1; i <= n; ++i)
	{	
		parent[i] = i;
	}
}
int find(int v){
	if(parent[v] == v) return v;
	return find(parent[v]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	return 0;
}