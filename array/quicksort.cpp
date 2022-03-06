#include<iostream>
using namespace std;

void swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int arr[],int low, int hight){
  int p = arr[hight];
  int i = low - 1;
  for(int j = low; j <= hight - 1;j++){
    if(arr[j]<p){
      i++;
      swap(&arr[i], &arr[j]);
    }
  } 
  swap(&arr[i+1], &arr[hight]);
  return (i+1);
}

void quicksort(int arr[], int low, int hight){
  if(low < hight){
    int p = partition(arr,low, hight);
    quicksort(arr,low,p - 1);
    quicksort(arr,p+1,hight);
  }
}

void print(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  quicksort(arr, 0, n - 1);
  cout << "Sorted array: \n";
  print(arr, n);
  return 0;
}

// 1,5,7,8,9,10