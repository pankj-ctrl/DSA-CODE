#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout << "Enter a number for checking it is Armstrong or not : ";
    cin >> num;
    int Num=num;
    while(num>0){
        int last=num%10;
        sum=sum+(last*last*last);
        num/=10;
    }
    if(sum==Num){
        cout << "It i a Armstrong Number \n";
    }else {
        cout << "It is not Armstrong Number \n";
    }

    return 0;
}