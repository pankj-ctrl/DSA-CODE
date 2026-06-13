#include <bits/stdc++.h>
using namespace std;

// Brute force (Using Set)
vector<int> bruteForce(int arr1[], int arr2[], int n1, int n2) {
    set<int> st;
    for(int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    vector<int> temp;
    for(auto it : st) {
        temp.push_back(it);
    }
    return temp;
}

// Optimal Solution (Two-Pointer)
vector<int> optimalsol(int arr1[], int arr2[], int n1, int n2) {
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i]) {
                unionArray.push_back(arr1[i]);
            }
            i++; 
        } else {
            // FIX: Changed arr2[i] to arr2[j]
            if (unionArray.size() == 0 || unionArray.back() != arr2[j]) {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    // FIX: Cleanup loop for arr1 (i pairs with n1)
    while (i < n1) {
        if (unionArray.size() == 0 || unionArray.back() != arr1[i]) {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
   
    // FIX: Cleanup loop for arr2 (j pairs with n2)
    // FIX: Changed arr2[i] to arr2[j]
    while (j < n2) {
        if (unionArray.size() == 0 || unionArray.back() != arr2[j]) {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    return unionArray;                                                                            
}
    
int main() {
    int n1, n2;
    cout << "Enter size of array 1 and array 2: ";
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    cout << "Now enter first sorted array elements: \n";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Now enter second sorted array elements: \n";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> temp = optimalsol(arr1, arr2, n1, n2);
 
    cout << "The Union is: \n";
    for(auto it : temp) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}