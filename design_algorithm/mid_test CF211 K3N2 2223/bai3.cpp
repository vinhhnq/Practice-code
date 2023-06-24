#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = 1e5 + 1;
int n, m;
int id[MAX];
int size[MAX];

int root(int i) {
    while (i != id[i]) {
      id[i] = id[id[i]];
      i = id[i];
    }
    return i;
}

void Union(int p, int q) {
    int a = root(p);
    int b = root(q);
    if (a == b)
        return;
    if (size[a] > size[b]) {
        id[b] = a;
        size[a] += size[b];
    }
    else {
        id[a] = b;
        size[b] += size[a];
    }
}

bool connected(int p, int q) {
    return root(p) == root(q);
}

int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        id[i] = i;
        size[i] = 1;
    }

    int count = 0;
    for (int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        if (connected(x, y) == false) {
            cout << "OK"<<endl;
            Union(x, y);
        }
        else {
            cout << "NO"<<endl;
            count++;
        }
    }
    cout << count;
    
    return 0;
}