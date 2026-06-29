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

    brute(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}