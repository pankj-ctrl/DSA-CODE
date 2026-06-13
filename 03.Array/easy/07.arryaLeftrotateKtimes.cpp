#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    // shifting
    for(int i=d; i<n;i++){
        arr[i-d]=arr[i];
    }

    // place back temp to array
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}

// optimal way , we are doing array reverse
/*
reverse(arr,arr+d)
reverse(arr+d,arr+n)
reverse(arr , arr+n)
 
by using this we can rotate this.

*/

void optimalway(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    int d=3;
    cout << "Now Enter your value : ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // bruteForce(arr,n,d);
    optimalway(arr,n,d);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}