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

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Now enter your element : \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    bruteForce(arr,n);

    return 0;
}