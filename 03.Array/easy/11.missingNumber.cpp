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

void optimal1(int arr[],int n){
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2=s2+arr[i];
    }

    cout << "Missing value is " << sum-s2 << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Now enter your element : \n";
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
 
    optimal1(arr,n);

    return 0;
}