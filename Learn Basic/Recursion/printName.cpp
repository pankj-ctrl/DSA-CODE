#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n){
        return;
    }
    cout << "Pankaj"<< endl;
    printName(i+1,n);
}

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    printName(1,num);
}