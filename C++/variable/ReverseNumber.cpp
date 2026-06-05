#include <iostream>
using namespace std;

int main(){
    int num, res;
    
    cout << "Enter a number : ";
    cin >> num;

    while(num>0){
        int lastDigit=num%10;
        res = res*10+lastDigit;
        num/=10;
    }

    cout << "Reverse of number is : " << res << "\n";
    return 0;
}