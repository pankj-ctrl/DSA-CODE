#include <iostream>
using namespace std;

void betterway(int arr[],int n){
   int largest=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
   }

   int slargest= -1;

   for(int i=0;i<n;i++){
    if(arr[i]>slargest && arr[i]!=largest){
        slargest=arr[i];
    }
   }

   cout <<" Second largest number : " <<slargest << endl;
}

int main (){
    int n; 
    cout <<"Enter a number : ";
    cin >>n;
    int arr[n];
    cout << "Now enter your elemnet: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    betterway(arr,n);

    return 0;
}