#include <iostream>
using namespace std;

int main(){
    int num,count=0;
    cout << "Enter a number ";
    cin >> num;

    while(num>0){
        int lastDigit= num%10;
        num=num/10;
        count++;
    }

    cout << "Number of digit " << count;
    return 0;
}