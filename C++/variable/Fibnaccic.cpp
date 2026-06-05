#include <iostream>
using namespace std;

int main(){
    int first=0,second=1,num;

    cout << "Enter a number : ";
    cin >> num;
    cout <<first <<" "<< second << " ";

    for (int i=2;i<=num; i++){
      int thirdNum = first+second;
      cout << thirdNum << " ";
      first=second;
      second=thirdNum;
    }
    cout << "\n";
    return 0;
}