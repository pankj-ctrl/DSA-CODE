#include <iostream>
using namespace std;

void printNum(int i, int n){
    if(i>n) return;
    printNum(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin>> n;
    printNum(1,n);
    return 0;
}