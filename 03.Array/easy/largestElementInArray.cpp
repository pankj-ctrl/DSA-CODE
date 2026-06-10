#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int highest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>highest){
            highest=arr[i];
        }
    }

    cout << "Highest element is : " << highest << endl;
    return 0;
}