#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout << "Enter a number : ";
    cin >> num;
    int temp=num;
    while(num>0){
        int ld=num%10;
        sum= sum+(ld*ld*ld);
        num/=10;
    }
    if(sum==temp){
        cout << "It is Armstrong number \n";
    }else {
        cout << "It is not a Armstrong number \n";
    }
    return 0;
}