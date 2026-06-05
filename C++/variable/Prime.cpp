#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int num,isPrime=true;

    cout << "Enter a Number: ";
    cin >> num;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            isPrime=false;
        }
    }

    if(isPrime){
        cout << "Prime number " << "\n";
    }else{
        cout << "Not a Prime number \n";
    }
    return 0;
}