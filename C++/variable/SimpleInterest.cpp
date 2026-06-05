#include<iostream>
using namespace std;
int main(){
    int p ,r ,t;

    cout << "Enter Principle value : ";
    cin >> p;

    cout << "Enter rate : ";
    cin >> r;

    cout << "Enter time : ";
    cin >> t;

    int interest = (p*r*t)/100;

    cout << "Simple Interest is "<< interest << "\n";
    
    return 0;
}