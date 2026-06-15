#include<bits/stdc++.h>
using namespace std;

void optimal(int arr[],int n){
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;
            if(count>max){
                max++;
            }
        }else{
            count =0;
        }
    }

    cout << "Max value is " << max << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Now start to enter your element : ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    optimal(arr,n);

    return 0;

}