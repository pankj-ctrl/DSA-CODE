#include <bits/stdc++.h>
using namespace std;

void bruteway(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;

    for(auto it:st){
        arr[index]=it;
        index++;
    }

}

// optimal way to solve this using two pointer;

void optimalway(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int arr[n];
    cout << "Now enter your number :" ;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    optimalway(arr,n);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 

    cout << endl;

    return 0;
}