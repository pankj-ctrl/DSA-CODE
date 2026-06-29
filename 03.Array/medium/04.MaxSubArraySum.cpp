#include <bits/stdc++.h>
using namespace std;

void better(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];
             maxi=max(sum,maxi);
        }
    }
    cout << "Max sub array sum is : " << maxi << endl;
}

// kadane's Alogrithm
void optimal(int arr[], int n){
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
    int sum= sum+arr[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){sum=0;}
   }
   cout << "Max sub array sum is : " << maxi << endl;
}

int main(){
     int n ;
     cout << "Enter size of array: ";
     cin >> n;
     int arr[n];
     cout << "Now enter the element : \n";
     for(int i=0;i<n;i++){
        cin >> arr[i];
     }

     optimal(arr,n);
    return 0;
}