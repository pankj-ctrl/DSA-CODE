#include <bits/stdc++.h>
using namespace std;

void optimalWay(int arr[],int n){
    for(int i=1;i<=(n/2);i++){
        int temp=arr[n-1];
    
        for(int j=n-1;j>=1;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp; 
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

    optimalWay(arr,n);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 

    cout << endl;

    return 0;
}