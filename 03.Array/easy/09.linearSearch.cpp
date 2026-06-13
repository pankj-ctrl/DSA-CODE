#include<bits/stdc++.h>
using namespace std;

void bruteForce(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout <<" found at index : "<< i+1;
            break;
        }
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    cout << "Now Enter your number ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key=5;

    bruteForce(arr,n,key);

    cout << endl;
    return 0;
}