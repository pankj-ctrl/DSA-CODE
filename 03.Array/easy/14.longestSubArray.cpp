#include<bits/stdc++.h>
using namespace std;

void bruteForce(int arr[],int n, int key){
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
               sum+=arr[j];
               if(sum==key){
                len = max(len,j-i+1);
               }    
        }
    }
    cout <<" Longest subarry " << len << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Now enter the element : ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key=3;

    bruteForce(arr,n,key);
    return 0;
}