#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int linearSearch(int arr[], int n, int x)
{   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) //nếu phần tử trong arr trùng với phần tử cần tìm
          return i; //trả về index i   
    }
    return -1; // nếu không tìm thấy thì trả về -1 (false)
}

int main(){
    int arr[MAX];
    int n;
    cout<<"nhap so phan tu mang: "; cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int x;
    cout<<"nhap phan tu can tim: ";
    cin>>x;
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;
    return 0;
}