#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout << "Enter number : ";
    cin >> num;

    while(num>0){
        int lastDigit=num%10;
        // cout << lastDigit;
        sum= sum+lastDigit;
        // cout << sum;
        num=num/10;
    }
    cout << "Sum of Digit is : " << sum << "\n";
    return 0;
}