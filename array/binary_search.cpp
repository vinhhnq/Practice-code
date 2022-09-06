#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int l, int r,int x)
{
    while(l < r){
      int mid = l + (r-l)/2;
      if(a[mid] == x)
        return mid;
      else if(a[mid] < x)
        l = mid + 1;
      else
        r = mid - 1;
    }
    return -1;
}

int main(){
  int a[100];
  int n;
  cout<<"nhap so phan tu mang: "; cin>>n;
  for(int i = 0; i < n; i++){
    cout<<"a["<<i<<"] = "; cin>>a[i];
  }
  int x;
  cout<<"nhap gia tri can tim: "; cin>>x;
  int index = binarysearch(a,0,n-1,x);
  if(index == -1)
    cout<<"khong tim thay";
  else
    cout<<"tim thay o vi tri "<<index;
}