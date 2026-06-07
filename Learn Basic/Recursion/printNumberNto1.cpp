#include <iostream>
using namespace std;

void printNum(int i,int n){
    if(n<i)return;
    cout << n << endl;
    printNum(i,n-1);
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    printNum(1,n);
    return 0;
}