#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n){
  for(int i = 0; i < n; i++){
    cout<<"nhap vao phan tu A["<<i<<"]: ";
    cin>>a[i];
  }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
      if (max < a[i])
        max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
      if (min > a[i])
        min = a[i];
        
    return min;
}
int main(){
  int a[1000];
  int n;
  cout<<"nhap so phan tu trong mang: ";
  cin>>n;
  input(a,n);
  cout<<"min = "<<min(a,n)<<endl;
  cout<<"max = "<<max(a,n)<<endl;
}