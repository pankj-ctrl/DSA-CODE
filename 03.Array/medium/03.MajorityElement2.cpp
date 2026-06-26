#include <bits/stdc++.h>
using namespace std;

int brute(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0,temp=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==temp){
                count++;
                
            }
            if (count > n / 2) {
            return temp; // Return the actual majority element
        }
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "Now Enter the Array size : " << endl;
    cin >> n;
    int arr[n];
    cout << "Now Enter the Element : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << brute(arr,n)<< " is majority element " << endl;
    return 0;
}