#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
vector<int> parent, size;
void makeSet(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        size[i] = 1;
    }
}
int find(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}
void _union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
      if (size[a] < size[b])
          swap(a, b);
      parent[b] = a;
      size[a] += size[b];
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    parent= vector<int> (n + 1);
    size= vector<int> (n + 1);
    
    vector<long long> f(n + 1);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        f[i] = f[i - 1] * i;
        f[i] %= MOD;
    }
    makeSet(n);
    while (m--) {
        int a, b;
        cin >> a >> b;
        _union(a, b);
    }
    vector<int> cnt(n + 1); 
    ll power = 0;
    for (int i = 0; i <= n; ++i) {
        int root= find(i);
        cnt[root] += 1;
    }
    for (int i = 0; i <= n; ++i) {
        if (cnt[i] > 2)
            power += f[cnt[i]];
        power %= MOD;
    }
    cout << power;
    return 0;
}