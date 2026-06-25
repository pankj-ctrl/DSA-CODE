#include<bits/stdc++.h>
using namespace std;

/*
First, we will use a loop (say i) to select the indices of the array one by one.
For every index i, we will traverse through the remaining array using another loop (say j) to find the other number such that the sum is equal to the target (i.e. arr[i] + arr[j] = target).
Observation: In every iteration, if the inner loop starts from index 0, we will be checking the same pair of numbers multiple times. For example, in iteration 1, for i = 0, we will check for the pair arr[0] and arr[1]. Again in iteration 2, for i = 1, we will check arr[1] and arr[0]. So, to eliminate these same pairs, we will start the inner loop from i + 1.

*/

pair<int, int> bruteForce(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        int tem=arr[i];
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                return {i,j};
        }
    }
  
}
  return {-1,-1};
}

/*
Here i use Hash Map apporach
*/

pair <int ,int > better(int arr[],int n , int target){
      map <int, int > mpp;
      for(int i=0;i<n;i++){
        int a =arr[i];
        int more = target-a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
      }
      return {-1,-1};
}


int main(){
    int n,target;
    cout << "Welcome To Two Sum Problem: " << endl;
    cin >> n;
    int arr[n]; 
    cout << "Enter target value here : ";
    cin >> target;
    cout << "Now Enter Element : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    pair <int ,int> result =better(arr,n,target);

    cout << result.first << "  " << result.second << endl;
    return 0;
}