#include <iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout << "Enter a number: ";
    cin >> num;

    while(num>0){
        int lastDigit= num%10;
        if(lastDigit%2!=0){
            sum = sum+lastDigit;
        }

        num/=10;
    }

    cout << "Sum of odd digit is " << sum << "\n";
    return 0;
}