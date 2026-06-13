#include <bits/stdc++.h>
using namespace std;

void optimalWay(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[0]=arr[i+1];
    }
    arr[n-1]=temp;

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