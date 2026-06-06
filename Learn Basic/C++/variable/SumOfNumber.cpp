// sum of n natuarl number
#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    
    cout << "Enter a number for sum : ";
    cin  >>num;

    for(int i=0;i<=num;i++){
        sum+=i;
    }
    
    cout << "Sum is " << sum << "\n";
    return 0;
}