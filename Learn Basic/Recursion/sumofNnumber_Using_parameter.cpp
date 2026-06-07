#include <iostream>
using namespace std;

void printSum(int i, int sum){
    if(i<1){
        cout << sum << endl;
        return ;
    }
    printSum(i-1,sum+i);

}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    printSum(n,0);
}