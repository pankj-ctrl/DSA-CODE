#include <bits/stdc++.h>
using namespace std;

void optimalWay(int arr[],int n,int k){
    for(int i=1;i<=k;i++){
        int temp=arr[0];
    
        for(int j=1;j<=n-1;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp; 
    }
    
    
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int arr[n];
    cout << "Now enter your number :" ;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int k=2;

    optimalWay(arr,n,k);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 

    cout << endl;

    return 0;
}