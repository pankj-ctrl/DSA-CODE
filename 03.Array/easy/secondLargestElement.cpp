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


void optimalway(int arr[] ,int n ){
     int largest=arr[0];
     int slargest= -1;
   for(int i=0;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>slargest){
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

    optimalway(arr,n);

    return 0;
}