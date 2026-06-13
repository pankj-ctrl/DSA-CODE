#include <bits/stdc++.h>
using namespace std;

/*
logic of solve the brutefoce 

fxn rotate (arr,n,idx){
  temp=arr[idx];
  for(i=idx;i<n-1;i++){
     arr[i]=arr[i+1];
  }
     arr[n-1]=temp;
}

fxn bruteForce(arr,n){
 count =0;
 i=0;
 while(count<n){
 if(arr[i]==0){
 rotate(arr,n,i);
 }
 else{
 i++;
 }
 count ++;
 }
}

*/

void rotate(int arr[],int n,int idx){
    int temp=arr[idx];
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void bruteForce(int arr[],int n){
    int i=0;
    int count =0;
    while(count<n){
        if(arr[i]==0){
            rotate(arr,n,i);
        }else{
            i++;
        }
        count ++;
    }
     
}

void bruteForce1(int arr[],int n){
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i = temp.size();i<n;i++){
        arr[i]=0;
    }
}

// optimal way

void optimalway(int arr[],int n){
    int i=-1;
    for(int j=0;j<n;j++){
       if(arr[j]==0){
          i=j;
          break;
        }
    }

    for(int j=i+1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}


int main(){
    int n;
    cin>> n;
    int arr[n];
    cout << "Now Enter your value : ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    optimalway(arr,n);
    

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}