#include<iostream>
#include<cmath>
using namespace std;

int a[8]; //
bool yes(int x, int y){
  for(int i=1; i<x;i++){
    if(a[i] == y || abs(i-x) == abs(a[i] - y)){
      return false;
    }
  }
  return true;
}
void output(int n){
  for(int i = 1;i<=n;i++){
    cout<<" "<<a[i];
  }
  cout<<"\n";
}
void Try(int i,int n){
  for(int j =1; j <= n; j++){
    if(yes(i,j)) // queen tai vi tri i dat vao cot thu j
    {
      a[i] = j;
      if(i == n){
        output(n);
      }
      Try(i+1,n);
    }
  }
}
int main(){
  int n = 8;
  Try(1,n);
  return 0;
}
// result
// 1 5 8 6 3 7 2 4
// 1 6 8 3 7 4 2 5
// 1 7 4 6 8 2 5 3
// 1 7 5 8 2 4 6 3

// cac vi tri dat hau khong bi 