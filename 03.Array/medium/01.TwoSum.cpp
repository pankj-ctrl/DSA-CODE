#include<bits/stdc++.h>
using namespace std;

pair<int, int> bruteForce(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        int tem=arr[i];
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                return {i,j};
        }
    }
  
}
  return {-1,-1};
}

int main(){
    int n,target;
    cout << "Welcome To Two Sum Problem: " << endl;
    cin >> n;
    int arr[n]; 
    cout << "Enter target value here : ";
    cin >> target;
    cout << "Now Enter Element : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    pair <int ,int> result =bruteForce(arr,n,target);

    cout << result.first << "  " << result.second << endl;
    return 0;
}