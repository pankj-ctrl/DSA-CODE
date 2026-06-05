#include <iostream>
using namespace std;
int main (){
    int money;
    cout<< "Enter Amount: ";
    cin >> money;
    if(money>50000 && money<1000000){
        money = (money*0.2);
    }else if (money>1000000){
        money = (money *0.3);
    }else{
        money =0;
    }

    cout<<"Tex on money " << money << "\n";

    return 0;
}