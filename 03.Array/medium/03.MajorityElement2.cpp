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


int better(int arr[],int n){
    int cnt=0,el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }else if(arr[i]==el){
            cnt++;
        }else{
            cnt --;
        }
    }
    
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el) temp++;
    }
    if(temp>n/2){
        return el;
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
    cout << better(arr,n)<< " is majority element " << endl;
    return 0;
}