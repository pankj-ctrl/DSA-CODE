#include <bits/stdc++.h>
using namespace std;
int part(int arr[],int low , int high){
  int pivot = arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i] <= pivot && i<=high-1){
        i++;
    }
    while(arr[j]>=pivot && j>=low+1){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  }

  int temp= arr[low];
  arr[low]=arr[j];
  arr[j]=temp;
  return j;
  
}

void quicksort(int arr[],int low, int high){
    if(low < high){
    int partIdx=part(arr,low,high);
    quicksort(arr, low, partIdx-1);
    quicksort(arr,partIdx+1,high);
    }
   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout << "Now enter your element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << endl;

    quicksort(arr,0,n-1);
   
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
   cout << endl;

    return 0;
}