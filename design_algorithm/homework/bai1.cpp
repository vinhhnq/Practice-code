#include <bits/stdc++.h>
using namespace std;

class UnionFind
{
private:
  /* data */
  vector<int> parent;
  vector<int> size;
public:
  UnionFind(int n) {
    parent.resize(n);
    size.resize(n);
    for (int i = 0; i < n; ++i) {
      parent[i] = i;
      size[i] = 1;
    }
  }
  int find(int p){
    while (p != parent[p]) {
      parent[p] = parent[parent[p]]; // Path compression
      p = parent[p];
    }
    return p;
  }
  void unionSets(int p, int q) {
    int rootP = find(p);
    int rootQ = find(q);
    if (rootP == rootQ)
      return;

    if (size[rootP] < size[rootQ]) {
      parent[rootP] = rootQ;
      size[rootQ] += size[rootP];
    } else {
        parent[rootQ] = rootP;
        size[rootP] += size[rootQ];
    } 
  }
  int getSize(int p) {
    int root = find(p);
    return size[root];
  }
};

int main(){ 
  
}

