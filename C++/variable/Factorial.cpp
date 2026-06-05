#include <iostream>
using namespace std;
int main (){
    int num,fact=1;
    cout << "Enter a number : ";
    cin >> num;

    for(num;num>=1;num--){
        fact=fact*num;
    }
    cout << "Factorial is " << fact << "\n";
    return 0;
}