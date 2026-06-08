#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int q;
    cout << "Enter Size of query : ";
    cin >> q;

    // Precompute
    int hash[25]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    cout << "Enter your query : ";
    while(q--){
       char c ;
       cin >> c;

    //    fetch
      cout << hash[c-'a'] <<endl;
    }
    return 0;
}
