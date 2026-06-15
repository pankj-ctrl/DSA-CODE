#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout <<"Number is " << i << endl;
        }

    }
}


void betterSolu(int arr [],int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            cout << "Number is " << i << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Now enter your element : \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    betterSolu(arr,n);

    return 0;
}