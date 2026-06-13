#include <bits/stdc++.h>
using namespace std;

vector<int> bruteForce(int arr1[],int arr2[],int n1, int n2){
    set <int > st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }

    vector <int > temp;
    int i=0;
    for(auto it:st){
        temp.push_back(it);
    }

    return temp;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    cout << "Now enter first array element : \n";

    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    cout << "Now enter second array element : \n ";

    for(int i=0;i<n2;i++){
        cin>> arr2[i];
    }

    vector<int> temp = bruteForce(arr1,arr2,n1,n2);
 
    for(auto it:temp){
        cout << it << " ";
    }

    return 0;
}