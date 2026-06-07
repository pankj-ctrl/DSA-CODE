#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    /*
    it takes O(n) time for ruuning
    for(int i=1; i<=num;i++){
        if(num%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
    
    */
    
    vector<int> ls;

    // Optimized way 
    // you can take i*i<=n; sqrt(num)
    for(int i=1; i*i<=num;i++){
        if(num%i==0){
        ls.push_back(i);

        if((num/i) != i){
            ls.push_back(num/i);
        }
        }
        
    }
    sort(ls.begin(),ls.end());

    for(auto it: ls)cout<< it << " ";
    cout << endl;
    return 0;
}