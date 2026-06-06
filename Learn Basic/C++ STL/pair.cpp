#include<bits/stdc++.h>
using namespace std ;

void pairExplain(){
    // pair<int,int> p={1,2};
    // cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> p={1,{7,8}};

    cout << p.first << " "<< p.second.first << " " <<p.second.second << endl;
}
int main (){
    pairExplain();
    return 0;
}