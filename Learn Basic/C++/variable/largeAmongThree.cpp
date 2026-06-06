#include <iostream>
using namespace std;
int main(){
    int a, b,c;
    cout << "Enter First number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter Third number : ";
    cin >> c;

    if((a>b)&& (a>c)){
        cout << a << " is largest number\n";
    }else if((b>a) && (b>c)){
        cout << b << " is largest number\n";
    }else{
        cout << c << " is largest number\n";
    }
    return 0;
}