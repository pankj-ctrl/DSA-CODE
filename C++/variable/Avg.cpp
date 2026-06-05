#include<iostream>
using namespace std;
int main (){
    int a ,b,c ;
    cout << "Enter your three subject marks : \n";
    cin >> a >> b>>c;
    int avg = (a+b+c)/3;
    cout << "Average is " << avg << "\n";
    return 0;
}