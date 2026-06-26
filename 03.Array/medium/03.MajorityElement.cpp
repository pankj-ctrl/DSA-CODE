#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of arr ";
    cin >> n;
    int arr[n];
    map<int ,int > Element_count;
    cout << "Now Enter the element : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        Element_count[arr[i]]+=1;
    }
    bool found = false;
    for(auto const& [element,count] :Element_count){
        if(count > n / 2) {
            cout << element << " is the majority element with count " << count << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << " Not any majority element in this " << endl;
    }
    return 0;
}