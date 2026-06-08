#include<bits/stdc++.h>
using namespace std;

bool palindrom(int i , string &s){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!= s[s.size()-i-1]){
        return false;
    }
    
    return palindrom(i+1,s);

}

int main(){
    string n;
    cin >> n;
    cout << palindrom(0,n);
    return 0;
}