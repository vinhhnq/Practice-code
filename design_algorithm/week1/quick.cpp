#include<bits/stdc++.h>
using namespace std;

class QuickFindUF
{
  private:
    int *id;
    int size;
  public:
    QuickFindUF(int n){
      id = new int[n];
      this->size = n;
      for (int i = 0; i < n; i++)
      {
        id[i]=i; 
      }
    }
    bool connected(int p, int q){
      return id[p] == id[q];
    }
    void Union(int p, int q){
      int pid = id[p];
      int qid = id[q];

      for (int i = 0; i < size; i++)
      {
        if (id[i] == pid) id[i] = qid;
      } 
    }
};
class QuickUnionUF 
{
  private:
    int *id;
    int size;
  public:
    QuickUnionUF(int N){
      id = new int(N);
      for (int i = 0; i < N; i++)
      {
        id[i] = i;
      }
    }
    int root(int i){
      while(i != id[i]) i=id[i];
      return i;
    }
    bool connected(int p, int q){
      return root(p) == root(q);
    }
    void Union(int p, int q){
      int i = root(p);
      int j = root(q);
      id[i]=j;
    }
};
class QuickWeight 
{
  private: 
    int *id, *sz;
    int size;
  public:
    QuickWeight(int N){
      size = N;
      id = new int[N];
      sz = new int[N];

      for (int i = 0; i < N; i++)
      {
        id[i] = i;
        sz[i] = i;
      }
    }
    int root(int i){
      while(i != id[i]) i=id[i];
      return i;
    }
    bool connected(int p, int q){
      return root(p) == root(q);
    }
    void Union(int p, int q){
      int i = root(p);
      int j = root(q);

      if(i == j) return;
      if(sz[i] < sz[j]){
        id[i] = j;
        sz[j] += sz[i];
      }
      else {
        id[j] = i; 
        sz[i] += sz[j];
      }
    }
};
int main(){
  QuickFindUF qf(10);
  qf.Union(4,3);
  qf.Union(3,8);
  qf.Union(6,5);
  qf.Union(9,4);
  qf.Union(2,1);
  cout<<qf.connected(7,9)<<endl;

  QuickUnionUF qu(10);
}
