#include <bits/stdc++.h>
using namespace std;

void brute(int arr[],int n){
    int pos[n/2];
    int neg[n/2];
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[j]=arr[i];
            j++;
        }else{
            neg[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
}

void optimal(int arr[],int n){
    int ans[n],postiveIdx=0,negativeIdx=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[postiveIdx]=arr[i];
            postiveIdx+=2;
        }else{
            ans[negativeIdx]=arr[i];
            negativeIdx+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] <<" ";
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Now enter the element : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    optimal(arr,n);

   
    cout << endl;
    return 0;
}